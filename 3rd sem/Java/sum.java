
// package com.company;
import java.util.Scanner;

public class sum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of A:");
        int a = sc.nextInt();
        System.out.println("Enter the value of B:");
        int b = sc.nextInt();
        System.out.println("Enter the value of C:");
        int c = sc.nextInt();
        int sum = a + b + c;
        System.out.println("The sum of three numbers is: " + sum);
    }
}
