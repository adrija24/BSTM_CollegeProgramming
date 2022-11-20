import java.util.Scanner;

public class ArrayInsert {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array: ");
        int size = sc.nextInt();
        int[] a = new int[100];
        System.out.println("Enter the elements: ");
        for (int i = 0; i < size; i++) {
            a[i] = sc.nextInt();
        }
        System.out.println("Enter another elements: ");
        int elm = sc.nextInt();
        System.out.println("Enter position:");
        int pos = sc.nextInt();
        for (int i = size; i >= pos; i--) {
            a[i] = a[i-1];
        }
        a[pos-1] = elm;
        size++;
        for (int i = 0; i < size; i++) {
            System.out.print(a[i] + " ");
        }
    }
}
