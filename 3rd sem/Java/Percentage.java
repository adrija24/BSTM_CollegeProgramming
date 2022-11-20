import java.util.Scanner;

public class Percentage {
    public static void main(String[] args) {
        Scanner Sc = new Scanner(System.in);
        System.out.println("Enter your marks in Bengali:");
        int Ben = Sc.nextInt();
        System.out.println("Enter your marks in English:");
        int Eng = Sc.nextInt();
        System.out.println("Enter your marks in Math:");
        int Math = Sc.nextInt();
        System.out.println("Enter your marks in Biology:");
        int Bio = Sc.nextInt();
        System.out.println("Enter your marks in Chemistry:");
        int Chem = Sc.nextInt();
        float percentage = (Ben + Eng + Math + Bio + Chem) / 5;
        System.out.println("The percentage is " + percentage);
    }
}
