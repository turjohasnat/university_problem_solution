import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        Icecream[] icecreams = new Icecream[5];

        for( int i = 1; i <= icecreams.length; i++ ){
            System.out.println("Enter details for Icecream " + i + ":");

            System.out.println("Name: ");
            String name = scanner.nextLine();

            System.out.println("Company: ");
            String company = scanner.nextLine();

            System.out.println("Price: ");
            double price = scanner.nextDouble();

            scanner.nextLine();
            icecreams[i] = new Icecream(name, company, price);
        }

        System.out.print("Enter the company name to search: ");
        String companyName = scanner.nextLine();


    }
}

public static void searchByCompany(Icecream[] icecreams, String companyName) {
    boolean found = false;
    System.out.println("Icecreams manufactured by " + companyName + ":" );
    for( Icecream icecream : icecreams){
        if(icecream.company.equalsIgnoreCase(companyName)){
            icecream.display();
            found = true;
        }
    }
    if(!found){
        System.out.println("No icecreams found from the company: " + companyName);
    }
}
