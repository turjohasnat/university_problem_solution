public class Main {
    public static void main( String [] args ){
        Student student_1 = new Student(); // Object Creation
        student_1.studentDetails(); // Method Call

        Student student_2 = new Student("Turjo", 23, 3.90); // Object Creation
        student_2.studentDetails(); // Method Call
    }
}