public class Icecream {
    String name;
    String company;
    double price;

    public Icecream( String name, String company, double price ){
        this.name = name;
        this.company = company;
        this.price = price;
    }

    public void display(){
        System.out.println("Name: " + name);
        System.out.println("Company: " + company);
        System.out.println("Price: " + price);
    }
}
