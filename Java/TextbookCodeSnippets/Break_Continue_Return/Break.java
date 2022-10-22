package TextbookCodeSnippets.Break_Continue_Return;

public class Break {
    public static void main(String[] args){
        first : for(int i = 0; i < 10; i++){
            System.out.print("hello");
            second : for(int j = 0;j<10;j++){
                System.out.println("world "+ i);
                if(j == 2) break second;
                if( i == 2) break first;
            }
        }
    }

}
