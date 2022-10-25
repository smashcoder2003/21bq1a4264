package TextbookCodeSnippets.Classes.Abstraction;

abstract class abstractA {
    void callMe(){} // abstract method of class abstractA
    void callMeToo(){
        System.out.println("Inside the AbstractA's callMeToo method");
    }
}
class B extends abstractA {
    void callMe(){
        System.out.println("B's  version of callMe method");
    }
}
class main {
    public static void main(String[] args) {
        B obj1 = new B();
        obj1.callMe();
        obj1.callMeToo();
    }
}
