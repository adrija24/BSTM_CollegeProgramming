import java.util.Scanner;

public class FactRecursion {
    int fact = 1;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int num = sc.nextInt();
        FactRecursion f = new FactRecursion();
        int res = f.calculate(num);
        System.out.println("Factorial of " + num + " = " + res);
    }
    int calculate(int n) {
        if(n > 1) {
            fact = fact * n;
            calculate(n - 1);
        }
        return fact;
    }
}