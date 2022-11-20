import java.util.Scanner;

class Square {
    int side;
    int area(int x)
    {
        return (x * x);
    }
    int perimeter(int x)
    {
        return 4*x;
    }
    
}

public class AreaPerimeter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Square ob = new Square();
        System.out.print("Enter side of square: ");
        int side = sc.nextInt();
        System.out.println("Area = " + ob.area(side));  
        System.out.println("Perimeter = " + ob.perimeter(side));
    }
}
