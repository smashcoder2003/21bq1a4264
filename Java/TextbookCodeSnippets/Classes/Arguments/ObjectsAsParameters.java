package TextbookCodeSnippets.Classes.Arguments;

class Testobj {
    int a,b;
     Testobj(int i , int j){
         a = i;
         b = j;
     }
     boolean equalTo(Testobj o){
         return o.a == a & o.b == b;
     }
     public static void main(String args[]){
         Testobj ob1 = new Testobj(100 , 22);
         Testobj ob2 = new Testobj(100, 22);
         System.out.println(ob1.equalTo(ob2));
     }
}