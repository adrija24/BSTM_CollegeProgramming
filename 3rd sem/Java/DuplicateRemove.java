import java.util.Scanner;

public class DuplicateRemove {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int dup = 0, flag = 0;
        System.out.println("Enter the size of array: ");
        int size = sc.nextInt();
        int[] a = new int[size];
        System.out.println("Enter the elements: ");
        for (int i = 0; i < size; i++) {
            a[i] = sc.nextInt();
        }
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (a[i] == a[j]) {
                    dup = j;
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1) {
            for (int i = dup; i < size - 1; i++) {
                a[i] = a[i + 1];
            }
            size--;
        }
        System.out.println("After removing the duplicate element:");
        for (int i = 0; i < size; i++) {
            System.out.print(a[i] + " ");
        }
    }
}
