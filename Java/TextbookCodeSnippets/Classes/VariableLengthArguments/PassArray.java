package TextbookCodeSnippets.Classes.VariableLengthArguments;

public class PassArray {

    static void vaTest(int v[] ) {
        System.out.print("number of args: " + v.length + " Contents: ");
        for( int x: v){
            System.out.print(x + " ");
        }
        System.out.println("");
    }

    public static void main(String[] args) {
        int n1[] = {1,2,3};
        int n2[] = {3,4,5};
        vaTest(n1);
        vaTest(n2);
    }
}
