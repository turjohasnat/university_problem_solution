//Java Solution:
import java.util.*;

public class CelsiusToFahrenheit {
    public static void main( String[] args ){
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the temperature in Celsius: ");
        float celsius = scanner.nextFloat();

        float fahrenheit = ((9 * celsius)/5) + 32;
        System.out.println(celsius + " C -> " + fahrenheit + " F");
    }
}
