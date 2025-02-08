public class Threads extends Thread{
    int n;

    public void run(){
        System.out.println("The thread is: " + n);
    }
}

public interface Main {
    public static void main(String[] args) {
        Threads t1 = new Threads();
        Threads t2 = new Threads();

        t1.n = 1;
        t2.n = 2;

        t1.start();
        t2.start();
    }
}
