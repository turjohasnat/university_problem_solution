//Java Solution:
import java.util.Scanner;

public class UserInputExample {
    public static void main( String[] args ){
        Scanner scanner = new Scanner( System.in );

        System.out.print("Enter your name: ");
        String name = scanner.nextLine();

        System.out.print("Enter your age: ");
        int age = scanner.nextInt();

        System.out.println("Hello " + name + ", Your age is " + age + ".");
    }
}
