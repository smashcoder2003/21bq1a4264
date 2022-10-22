package TextbookCodeSnippets.Classes;

class Test{
    int a,b;
     Test(int i , int j){
         a = i;
         b = j;
     }
     boolean equalTo(Test o){
         return o.a == a & o.b == b;
     }
     public static void main(String args[]){
         Test ob1 = new Test(100 , 22);
         Test ob2 = new Test(100, 22);
         System.out.println(ob1.equalTo(ob2));
     }
}