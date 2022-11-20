import java.util.Scanner;
public class RotateArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter no. of elements of array: ");
        int n = sc.nextInt();
        int[] a = new int[n];
        System.out.println("Enter the elements:");
        for(int i = 0; i < a.length; i++)
        {
            a[i] = sc.nextInt();
        }

        int temp = a[n-1];
        for(int i = a.length-1; i > 0; i--)
        {
            a[i] = a[i-1];
        }
        a[0] = temp;

        System.out.println("After rotating:");
        for (int i : a) {
            System.out.print(i + " ");
        }
    }
}
