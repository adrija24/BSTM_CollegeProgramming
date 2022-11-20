import java.util.Scanner;

public class KilometerToMiles {
    public static void main(String[] args) {
        Scanner Sc = new Scanner(System.in);
        System.out.println("Enter the distance in Kilometers:");
        double dis = Sc.nextInt();
        double miles = (0.62137 * dis);
        System.out.println("The distance in miles is " + miles);
    }

}
