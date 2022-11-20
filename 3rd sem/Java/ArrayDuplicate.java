 import java.util.Scanner;

public class ArrayDuplicate {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int dup = 0;
        System.out.println("Enter the size of array: ");
        int size = sc.nextInt();
        int[] a = new int[size];
        System.out.println("Enter the elements: ");
        for (int i = 0; i < size; i++) {
            a[i] = sc.nextInt();
        }
        for (int i = 0; i < size; i++) {
            for (int j = i+1; j < size; j++) {
                if(a[i] == a[j])
                {
                    dup = a[i];
                    break;
                }
            }
        }
        System.out.println("Duplicate Element : " + dup);
    }
}
