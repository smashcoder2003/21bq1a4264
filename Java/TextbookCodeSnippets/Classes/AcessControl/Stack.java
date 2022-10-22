package TextbookCodeSnippets.Classes.AcessControl;

public class Stack {
    private int stck[] = new int[10];
    private int tos;
    Stack(){
        tos = -1;
    }
    void push(int item){
        if(tos == 9) System.out.println("Stack is full.");
        else stck[++tos] = item;
    }
    int pop(){
        if(tos<0){
            System.out.println("stack underflow.");
            return 0;
        }
        else return stck[tos--];
    }

}
class TestStack {
    public static void main(String args[]) {
        Stack mystack1 = new Stack();
        Stack mystack2 = new Stack();
        // push some numbers onto the stack
        for(int i=0; i<10; i++) mystack1.push(i);
        for(int i=10; i<20; i++) mystack2.push(i);
        // pop those numbers off the stack
        System.out.println("Stack in mystack1:");
        for(int i=0; i<10; i++)
            System.out.println(mystack1.pop());
        System.out.println("Stack in mystack2:");
        for(int i=0; i<10; i++)
            System.out.println(mystack2.pop());
        // these statements are not legal
        // mystack1.tos = -2;
        // mystack2.stck[3] = 100;
    }
}