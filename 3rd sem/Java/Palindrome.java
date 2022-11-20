import java.util.Scanner;

public class Palindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string:");
        String str = sc.next();
        String s1 = "";
        for (int i = str.length() - 1; i >= 0; i--) {
            s1 = s1 + str.charAt(i);
        }
        // System.out.println(s1);
        if (str.equals(s1) == true) {
            System.out.println(str + " is Palindrome");
        } else {
            System.out.println(str + " is not Palindrome");
        }
    }
}