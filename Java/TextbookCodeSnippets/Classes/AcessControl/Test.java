package TextbookCodeSnippets.Classes.AcessControl;

public class Test {
    int a;
    public int b;
    private int c;

    void setc(int i){
        c = i;
    }
    int getc(){
        return c;
    }

}
class AccessTest {
    public static void main(String[] args){
        Test ob = new Test();
        ob.a = 10;
        ob.b = 20;
        // ob.c = 100;// the following line generates the error as c is private variable.
        ob.setc(100);
        System.out.println("a, b, and c: " + ob.a + " " + ob.b + " " + ob.getc());
    }
}