package TextbookCodeSnippets;

public class IfSample {
    public static void main(String[] args){
        int x = 10,y = 20;
        if (x<y) System.out.println("X is less than Y");
        x = x*2;
        if (x==y) System.out.println("X is equal to Y");
        x *=2;
        if(x>y) System.out.println("X is greater than y");
        x = x*2;
        if(x==y) System.out.println("This won't be seen");
    }
}
