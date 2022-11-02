public class Testing{}
class OddThread implements Runnable {
    Thread Odd;
    OddThread(){
        Thread Odd = new Thread(this,"Thread");
    }

    @Override
    public void run() {
            try {
        for(int i =0;i<=100;i++){
            System.out.println("Thread" + Odd.getName() +  " " + i );
                Thread.sleep(1000);
            }
        } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
    }
}
class EvenThread implements Runnable {
    Thread Even;
    EvenThread(){
        Thread Even = new Thread(this,"Thread");
    }

    @Override
    public void run() {
        try {
            for(int i =0;i<=100;i++){
                System.out.println("Thread" + Even.getName() +  " " + i );
                Thread.sleep(1000);
            }
        } catch (InterruptedException e) {
            throw new RuntimeException(e);
        }
    }
}