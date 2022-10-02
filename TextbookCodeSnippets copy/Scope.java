package TextbookCodeSnippets;

public class Scope {
    public static void main(String[] args){
        int x = 10;
        if(x==10){
            int y= 20;
            System.out.print("x and y are: " + x + " " + y);
        }
        // y = 20; y is not known here
    }
}
