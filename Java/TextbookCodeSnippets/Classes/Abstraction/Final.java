package TextbookCodeSnippets.Classes.Abstraction;

class Final1 {
    final void meth(){
        System.out.println("Final version of meth: ");
    }
}
class Final2 extends Final1 {
//    void meth(){ // the method can't be overridden because it was declared as final.
//        System.out.println("This is ILLEGAL!!!");
//    }
}