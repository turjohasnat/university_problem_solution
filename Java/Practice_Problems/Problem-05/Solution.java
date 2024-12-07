//Java Solution:
import static java.lang.Math.pow;

public class Main {
    public static void main(String[] args) {
        double radius = 5.5;
        double perimeter = 2 * 3.1416 * radius;
        double area = 3.1416 * pow(radius, 2);

        System.out.println("Perimeter: " + perimeter);
        System.out.println("Area: " + area);
    }
}
