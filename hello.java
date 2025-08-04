import java.util.Scanner;

public class AddTwoNumbers {
    public static void main(String[] args) {
        // Create a Scanner object to take input
        Scanner scanner = new Scanner(System.in);

        // System.out.print("Enter first number: ");
        int num1 = scanner.nextInt();  // Read first number

        // System.out.print("Enter second number: ");
        int num2 = scanner.nextInt();  // Read second number

        int sum = num1 + num2;  // Add the numbers

        System.out.println("Sum: " + sum);  // Print the result

        scanner.close();  // Close the scanner
    }
}
