import java.util.Scanner;
public class ArmstrongNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number:");
        int num = sc.nextInt();
        int count =0, store = num, store1 =num, num1 =0; 
        double sum = 0;
        while ( num != 0) {
            num /= 10;
            count++;
        }
        while(store != 0)
        {
            num1 = store % 10;
            store = store/ 10;
            sum = sum + (Math.pow(num1,count));
        }
        if(sum == store1)
        {
           System.out.println("This is an armstrong number.");
        }
        else{
            System.out.println("This is not an armstrong number.");
        }
    }
}
