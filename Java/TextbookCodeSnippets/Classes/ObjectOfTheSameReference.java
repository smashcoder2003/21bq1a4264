package TextbookCodeSnippets.Classes;

public class ObjectOfTheSameReference {
    int height = 10;
    void invokeObject(){
        System.out.println(this.height);
    }
    public static void main(String[] args){
        ObjectOfTheSameReference b1 = new ObjectOfTheSameReference();
        // both the objects refer the same location so if you change
        // the attribute of one of the objects
        // the other attribute of the other object will reflect the same
        ObjectOfTheSameReference b2 = b1;// b1,b2 point to the same memory location
        System.out.println("The height of b1 is " + b1.height);
        System.out.println("The height of b1 is " + b2.height);
        b2.height = 0;

        System.out.println("The height of b1 is " + b1.height);
        System.out.println("The height of b2 is " +  b2.height);
    }


}
