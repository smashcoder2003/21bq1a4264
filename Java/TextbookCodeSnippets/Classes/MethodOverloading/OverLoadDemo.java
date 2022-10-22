package TextbookCodeSnippets.Classes.MethodOverloading;

public class OverLoadDemo {
    void test(){
        System.out.println("NO parameter.");
    }
    void test(int a ){
        System.out.println("a: " + a);
    }
    void test(int a, int b){
        System.out.println("a an b : " + a + " " + b);
    }
    public static void main(String[] args){
        OverLoadDemo ob = new OverLoadDemo();
        ob.test();
        ob.test(10);
        ob.test(10, 20);
        System.out.println("All the methods hav been overloaded.");
    }
}
