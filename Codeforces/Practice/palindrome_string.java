import java.util.*;
import java.io.*;

public class palindrome_string{
    static boolean isPalindrome(String str){
        int low = 0;
        int high = str.length()-1;
        while(low<high){
            if(str.charAt(low) != str.charAt(high)){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }

    public static void main(String[] args) throws IOException{
        FastScanner sc = new FastScanner();
        PrintWriter out = new PrintWriter(new OutputStreamWriter(System.out));
        String s = sc.next();
        if(isPalindrome(s)){
            out.print("YES");
        }
        else{
            out.print("NO");
        }
    }

    static class FastScanner {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer("");
 
        String next() {
            while (!st.hasMoreTokens())
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            return st.nextToken();
        }
 
        int nextInt() {
            return Integer.parseInt(next());
        }
 
        int[] readArray(int n) {
            int[] a = new int[n];
            for (int i = 0; i < n; i++) a[i] = nextInt();
            return a;
        }
 
        long nextLong() {
            return Long.parseLong(next());
        }
 
    }

    static final Random random = new Random();
    static final int mod = 1_000_000_007;
 
    static void ruffleSort(int[] a) {
        int n = a.length;//shuffle, then sort
        for (int i = 0; i < n; i++) {
            int oi = random.nextInt(n), temp = a[oi];
            a[oi] = a[i];
            a[i] = temp;
        }
        Arrays.sort(a);
    }
 
    public static void swap(int a, int b) {
        int temp = a;
        a = b;
        b = temp;
    }
 
    public static int power(int a, int p) {
        int res = 1;
        while (p > 0) {
            if ((p & 1) == 1)
                res = (res * a) % mod;
            a = (a * a) % mod;
            p >>= 1;
        }
        return res;
    }
 
    static int gcd(int a, int b) {
        if (a == 0)
            return b;
        return gcd(b % a, a);
    }
 
    static int lcm(int a, int b) {
        return (a / gcd(a, b)) * b;
    }
 
    static long add(long a, long b) {
        return (a + b) % mod;
    }
 
    static long sub(long a, long b) {
        return ((a - b) % mod + mod) % mod;
    }
 
    static long mul(long a, long b) {
        return (a * b) % mod;
    }
 
    static long exp(long base, long exp) {
        if (exp == 0) return 1;
        long half = exp(base, exp / 2);
        if (exp % 2 == 0) return mul(half, half);
        return mul(half, mul(half, base));
    }
 
    static long[] factorials = new long[2_000_001];
    static long[] invFactorials = new long[2_000_001];
 
    static void precompFacts() {
        factorials[0] = invFactorials[0] = 1;
        for (int i = 1; i < factorials.length; i++) factorials[i] = mul(factorials[i - 1], i);
        invFactorials[factorials.length - 1] = exp(factorials[factorials.length - 1], mod - 2);
        for (int i = invFactorials.length - 2; i >= 0; i--)
            invFactorials[i] = mul(invFactorials[i + 1], i + 1);
    }
 
    static long nCk(int n, int k) {
        return mul(factorials[n], mul(invFactorials[k], invFactorials[n - k]));
    }
 
    static void sort(int[] a) {
        ArrayList<Integer> l = new ArrayList<>();
        for (int i : a) l.add(i);
        Collections.sort(l);
        for (int i = 0; i < a.length; i++) a[i] = l.get(i);
    }

    static void reverseSort(int arr[]) {
        ArrayList<Integer> a = new ArrayList<Integer>();
        for (int i = 0; i < arr.length; i++) {
            a.add(arr[i]);
        }
        Collections.sort(a, Comparator.reverseOrder());
        for (int i = 0; i < arr.length; i++) {
            arr[i] = a.get(i);
        }
    }
}