import java.util.Scanner;

class Square {
    int side;
    public int Area() {
        return side * side;
    }
    public int Per() {
        return 4 * side;
    }
}
public class SquareArea {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Square s = new Square();
        System.out.println("Enter the side: ");
        s.side = sc.nextInt();
        System.out.println("Area = " + s.Area());
        System.out.println("Parameter = " + s.Per());
    }
}