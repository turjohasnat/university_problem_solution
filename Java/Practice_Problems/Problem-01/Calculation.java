//Java Solution:
import java.util.*;

public class Calculation {
    public static void main(String[] args) {
        Scanner scanner = new Scanner( System.in );

        System.out.print("Enter your first number: ");
        int num1 = scanner.nextInt();

        System.out.print("Enter your second number: ");
        int num2 = scanner.nextInt();

        int sum = num1 + num2;
        int difference = num1 - num2;
        int product = num1 * num2;
        float quotient = (float) num1 / num2;

        System.out.println("Sum: " + sum);
        System.out.println("Difference: " + difference);
        System.out.println("Product: " + product);
        System.out.println("Quotient: " + quotient);
    }
}
