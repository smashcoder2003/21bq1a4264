package TextbookCodeSnippets;

public class BoolTest {
    public static void main(String[] args){
        boolean b = false;
        System.out.println("b is " + b);
        b = true;
        System.out.println("b is "+ b);
        if(b) System.out.println("This statement is executed:");
        b = false;
        if (b) {System.out.print("This statement is not executed");}
        System.out.println("10 < 9 is : " + (10 <9));
    }
}
