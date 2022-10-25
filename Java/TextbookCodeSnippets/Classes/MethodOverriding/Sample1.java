package TextbookCodeSnippets.Classes.MethodOverriding;

class A {
    int i,j;
    A (int a , int b){
        i  = a;
        j = b;
    }
    void show(){
        System.out.println("i and j: " + i + " " + j);
    }
}
class B extends A {
    int k;
    B(int a, int b, int c){
        super(a,b);
        k = c;
    }
    void show(){ // this method overrides the method in the parent class(A)
        System.out.println("k: " + k);
    }

}
class test {
    public static void main(String[] args){
        B obj1 = new B(10,11,12);
        obj1.show();
    }
}