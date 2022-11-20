import java.util.Scanner;
public class Fibonacci{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the range:");
        int ran = sc.nextInt();
        int n =0;
        for(int i = 1; i <= ran; i++)
        {
            if(n == 0 || n == 1)
            {
                System.out.print(n + " ");
            }
            else{
                System.out.print((n-1)+(n -2) + " ");
            }
            n++;
        }
    }
}


                    //......ANOTHER PROCESS.....//

// import java.util.Scanner;
// public class Fibonacci {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.println("Enter a number:");
//         int ran = sc.nextInt();
//         int a = 0, b= 1, c;
//         System.out.println("Fibonacci of the number is");
//         while(a <= ran)
//         {
           
//         }

//     }
// }


// System.out.print(a+ " ");
// c = a + b;
// a = b;
// b = c;