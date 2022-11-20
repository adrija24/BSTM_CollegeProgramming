import java.util.Scanner;

public class Operators {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two numbers:");
        int a = sc.nextInt();
        int b = sc.nextInt();
        Calculation ob = new Calculation();
        System.out.println("The sum of the two numbers is: " + ob.add(a, b));
        System.out.println("The difference of the two numbers is: " + ob.sub(a, b));
        System.out.println("The multiplication of the two numbers is: " + ob.multi(a, b));
        System.out.println("The division of the two numbers is: " + ob.div(a, b));
    }
}

class Calculation {
    int add(int x, int y) {
        return x + y;
    }

    int sub(int x, int y) {
        return x - y;
    }

    int multi(int x, int y) {
        return x * y;
    }

    int div(int x, int y) {
        return x / y;
    }

}