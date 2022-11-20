import java.util.Scanner;

class Circle {
    int rad;
    float p = 3.14f;
    public void Area() {
        System.out.println("Area = " + p * rad * rad);
    }
    public void Per() {
        System.out.println("Parameter = " + 2 * p * rad);
    }
}
public class CircleArea {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Circle s = new Circle();
        System.out.println("Enter the side: ");
        s.rad = sc.nextInt();
        s.Area();
        s.Per();
    }
}