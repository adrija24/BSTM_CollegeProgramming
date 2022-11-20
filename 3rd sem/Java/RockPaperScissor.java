import java.util.Random;
import java.util.Scanner;

public class RockPaperScissor {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int randChoice = 0;
        String userChoice = " ";
        Random ran = new Random();
        
        randChoice = ran.nextInt( 3 ) + 1;
        // randChoice = 1;
        
        String computerChoice = " ";
        if (randChoice == 1) {
            computerChoice = "rock";
        } else if (randChoice == 2) {
            computerChoice = "paper";
        } else if (randChoice == 3) {
            computerChoice = "scissor";
        }
        
        System.out.println("Choose one:");
        System.out.println("1. Rock\n2. Paper\n3. Scissor");
        System.out.println("Enter your choice:");
        userChoice = sc.next();
        
        System.out.println("\nComputer already made its choice.");
        
        System.out.println("\nYour choice: " + userChoice);
        System.out.println("computer choice: " + computerChoice);

        if(computerChoice.compareTo(userChoice)==0)
        {
            System.out.println("Both are same.");
        }
        else if((computerChoice.equals("rock") && userChoice.equals("scissor")) || (computerChoice.equals("scissor") && userChoice.equals("paper")) || (computerChoice.equals("paper") && userChoice.equals("rock")))
        {
            System.out.println("Computer wins.");
        }
        else
        {
            System.out.println("User wins.");
        }
        
    }
}