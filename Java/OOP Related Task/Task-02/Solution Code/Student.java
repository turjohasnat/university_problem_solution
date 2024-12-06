public class Student {
    // Properties
    String name; // Attribute
    int id; // Attribute
    double cgpa; // Attribute

    // Default Constructor
    public Student(){
        this.name = "Unknown";
        this.id = 0;
        this.cgpa = 0.0;
    }

    // Parameterized Constructor
    public Student(String name, int id, double cgpa ){
        this.name = name;
        this.id = id;
        this.cgpa = cgpa;
    }

    // Method
    public void studentDetails(){
        System.out.println("Name: " + name);
        System.out.println("ID: " + id);
        System.out.println("CGPA: " + cgpa);
        System.out.println();
    }
}
