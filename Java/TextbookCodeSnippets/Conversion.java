package TextbookCodeSnippets;

public class Conversion {
    public static void main(String[] args){
        byte b;
        int i = 257;
        double d = 2371.5262;
        System.out.println("Conversion of int to byte.. ");
        b = (byte) i;
        System.out.println("i and b are: " + i + " " + b);
        System.out.println("Conversion of double to int ");
        i = (int) d;
        System.out.println("d and i are: " + d + " " + i);
        System.out.println("Conversion from double to byte: ");
        b = (byte) d;
        System.out.print("d and b are: " + d+ " " + b);

    }
}
