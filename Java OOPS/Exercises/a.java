import java.util.*;
public class a {
    static final MOD = 1e7+9;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of N: ");
        int n = sc.nextInt();
        System.out.print("Enter the value of nth bit: ");
        int bit = sc.nextInt();

        //SHIFTING IN BIT
        System.out.println("Left Shift: "+(n << 1)); //(2*n)
        System.out.println("Right Shift: "+(n >> 1)); //(n/2)

        //POWER
        //avoid using Math.pow(a,b) function
        System.out.println("Power: " + (1<<n)); //2^n
        System.out.println("Power(n+1): " + (2<<n)); //2^(n+1)
        System.out.println("Set Bit: " + (n | ((1<<bit))));
        System.out.println("Unset Bit: " + (n & (~(1<<bit))));

        //CHECKING FOR ODD AND EVEN ==> (N & 1)
        //AVOID THIS:- (N%2 == 0)
        int x = (n & 1);
        if(x == 0){
            System.out.println("Even");
        }
        else{
            System.out.println("Odd");
        }

        //CHECKING POWER OF 2 ==> (N & (N-1))
        // (4 and 3) == (000) ==> 0
        int y = (n & (n-1));
        if(y == 0){
            System.out.println("Power of Two");
        }
        else{
            System.out.println("NOT Power of Two");
        }
        sc.close();
    }
}
