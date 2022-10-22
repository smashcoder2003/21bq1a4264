package TextbookCodeSnippets.Classes.Arguments;

public class Test {
    void meth(int i, int j){
        i *= 2;
        j /= 2;
    }
}
class CallByValue {
    public static void main(String args[]){
        Test ob = new Test();
        int a = 15, b = 20;
        System.out.println("a and b before call: " + a + " " + b);
        // since the values are only passed the changes won't reflect to the original
        // variables
        ob.meth(a, b);
        System.out.println();
        System.out.println("a and b after call: " + a + " " + b);
    }
}