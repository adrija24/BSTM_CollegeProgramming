import java.util.Scanner;

public class IntOrNot {
    public static void main(String[] args) {
        Scanner Sc = new Scanner(System.in);
        System.out.println("Enter a number:");
        boolean num = Sc.hasNextInt();
        System.out.println(num);
    }

}
