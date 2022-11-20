import java.util.Scanner;

public class ArrayDelete {
    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in);
        System.out.println("Enter the size of array: ");
        int size = sc.nextInt();
        int[] a = new int[size];
        System.out.println("Enter the elements: ");
        for (int i = 0; i < size; i++) {
            a[i] = sc.nextInt();
        }
        System.out.println("Enter position to delete: ");
        int pos = sc.nextInt();
        for (int i = pos-1; i < size-1; i++) {
            a[i] = a[i+1];
        }
        size--;
        for (int i = 0; i < size; i++) {
            System.out.print(a[i] + " ");
        }
    }
}
