package LabCyclePrograms.Exp12;

class Prime implements Runnable
{
    long j,c;
    Prime() {
        c = 0;
    }
    @Override
    public void run()
    {
        for(long i=0;i<=100000;i++)
        {
            for(j=2;j<=i;j++)
            {
                if(i%j==0)
                    break;
            }
            if(j==i)
            {
                c++;
                System.out.println(c+"th" +" Prime no: = "+i);
            }
        }
    }

}
class Fib implements Runnable
{
    long a,b,c,n;
    Fib()
    {
        a=c=n=0;
        b=1;
    }
    public void run()
    {
        try { while( a< 100000){
            System.out.println(n+"th" +" Fib no: = "+a);
            n++;
            Thread.sleep(1000);
            c=a+b;
            a=b;
            b=c;
        }
        } catch(InterruptedException e)
        {
            System.out.println("Error : " + e);
        }
    }
}
class MyPriFib {

    public static void main(String[] args) {
        Thread ct = Thread.currentThread();
        System.out.println("Main thread name : " + ct.getName());
        Prime p = new Prime();
        Fib f = new Fib();
        Thread fib = new Thread(f, "fibonacci");
        // main thread execution
        Thread prime = new Thread(p, "prime");
        fib.start();
        System.out.println("Thread " + fib.getName() + " started.");
        prime.start();
        System.out.println("Thread " + prime.getName() + " started.");
    }
}
