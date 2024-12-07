//Java Solution:
import java.util.*;
import static java.lang.Math.pow;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your radius value: ");
        double radius = scanner.nextDouble();

        double perimeter = 2 * 3.1416 * radius;
        double area = 3.1416 * pow(radius, 2);

        System.out.println("Perimeter: " + perimeter);
        System.out.println("Area: " + area);
    }
}
