package MyWork.Sorting;
class a{
    a(){
        System.out.println("Hi");
    }
    a(int x){
        this.x = x;
    }

    int x;
}
class b extends a{
    int y;
    b(int y){
        super();
        this.y = y;
    }
}
public class Main {
    public static void main(String[] args){
    b ob1 = new b(10);
    }
}
