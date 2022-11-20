import java.util.Scanner;

public class Greet {
    public static void main(String[] args) {
        Scanner Sc = new Scanner(System.in);
        System.out.println("Enter your name:");
        String name = Sc.next();
        System.out.println("Hello " + name + ",have a good day.");
    }
}
