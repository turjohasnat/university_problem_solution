public class Threads extends Thread{
    int start, end,sum = 0;

    public Threads(int start, int end){
        this.start = start;
        this.end = end;
    }

    public void run(){
        for (int i = start; i <= end; i++){
            sum += i;
        }
    }
}

class Main {
    public static void main(String[] args) {
        Threads threads = new Threads(1, 100);
        Threads threads1 = new Threads(101, 200);
        Threads threads2 = new Threads(201, 300);
        Threads threads3 = new Threads(301, 400);

        threads.start();
        threads1.start();
        threads2.start();
        threads3.start();

        System.out.println("Sum: " + (threads.sum + threads1.sum + threads2.sum + threads3.sum));
        
    }
}
