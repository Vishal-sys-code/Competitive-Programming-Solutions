import java.util.Scanner;
public class cgpa {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Double subject1,subject2,subject3;
        Double sumofallsub = 0.0;
        Double average;
        System.out.print("Python: ");
        subject1 = sc.nextDouble();
        System.out.print("Machine Learning: ");
        subject2 = sc.nextDouble();
        System.out.print("Quantum Computing: ");
        subject3 = sc.nextDouble();
        sumofallsub = (subject1+subject2+subject3);
        average = sumofallsub/3;
        System.out.println("Total marks: " + sumofallsub);
        System.out.println("Average: " + average);
        sc.close();
    }    
}
