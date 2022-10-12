public class Testing{
    static public short i;
    static void recurse(){
        System.out.println(i++);
        recurse();
    }
    public static void main(String[] args) {
        recurse();
    }
}