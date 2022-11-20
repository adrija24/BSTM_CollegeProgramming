import java.util.Scanner;

public class PrimeNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number:");
        int num = sc.nextInt();
        int key = 0;
        for (int i = 2; i < num / 2; i++) {
            if (num % i == 0) {
                key = 1;
            }
        }
        if (key == 1) {
            System.out.println(num + " is not Prime number.");
        } else {
            System.out.println(num + " is Prime number.");
        }

    }
}
