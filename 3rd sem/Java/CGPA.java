import java.util.Scanner;

public class CGPA {
    public static void main(String[] args) {
        Scanner Sc = new Scanner(System.in);
        System.out.println("Enter the marks of sub1:");
        int sub1 = Sc.nextInt();
        System.out.println("Enter the marks of sub2:");
        int sub2 = Sc.nextInt();
        System.out.println("Enter the marks of sub3:");
        int sub3 = Sc.nextInt();
        float cgpa = (sub1 + sub2 + sub3) / 30;
        System.out.println("The CGPA marks of three subjects is: " + cgpa);
    }
}
