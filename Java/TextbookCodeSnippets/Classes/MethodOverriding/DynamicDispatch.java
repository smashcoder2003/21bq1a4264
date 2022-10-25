package TextbookCodeSnippets.Classes.MethodOverriding;

class I {
    void callMe() {
        System.out.println("Inside I's callMe method.");
    }
}
class J extends I {
    void callMe(){
        System.out.println("INSIDE J's callMe method.");
    }
}
class K extends J {
    void callMe() {
        System.out.println("Inside K's callMe method.");
    }
}
class main {
    public static void main(String[] args){
        K obj1 = new K();
        J obj2 = new J();
        I obj3 = new I();
        I r;
        r = obj3; // r refers to the class I
        r.callMe();// inside I's callMe method
        r = obj2;// r refers to the class J
        r.callMe();// inside J's callMe method
        r = obj1;// r refers to the calss K
        r.callMe();// inside K's callMe method
    }
}