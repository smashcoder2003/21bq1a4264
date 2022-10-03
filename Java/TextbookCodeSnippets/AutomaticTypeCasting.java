package TextbookCodeSnippets;

public class AutomaticTypeCasting {
    public static void main(String[] args){
        short a = 50;
        byte b = 40;
        int c = 100;
        int d = a * b / c;
        // int when evaluating an expression
        b = (byte) (b*2);
        // a = a*2; at every expression java promotes byte,short,char into int.
        System.out.println(b);
    }
}
