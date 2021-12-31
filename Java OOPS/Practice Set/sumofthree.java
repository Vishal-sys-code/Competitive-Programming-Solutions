import java.util.Scanner;

public class sumofthree{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a,b,c,sum=0;
        System.out.print("A: ");
        a = sc.nextInt();
        System.out.print("B: ");
        b = sc.nextInt();
        System.out.print("C: ");
        c = sc.nextInt();
        if(a<0 && b<0 && c<0){
            System.out.println("All three numbers are negative");
        }
        else{
            sum = a+b+c;
            System.out.println("Sum is: " + sum);
        }
        sc.close();
    }
}