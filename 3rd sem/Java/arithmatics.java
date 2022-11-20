import java.util.Scanner;

public class arithmatics {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.err.print("Input two number: ");
            int a = sc.nextInt();
            int b = sc.nextInt();
            
            Sum cal = new Sum();
            System.out.println("addition is: " + cal.add(a, b));
            System.out.println("difference is: " + cal.sub(a, b));
        }
    }
}

class Sum {
    public int add(int x, int y) {
        return x + y;
    }

    public int sub(int x, int y) {
        return x - y;
    }
}

