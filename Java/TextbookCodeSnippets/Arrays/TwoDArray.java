package TextbookCodeSnippets.Arrays;

public class TwoDArray {
    public static void main(String[] args){
        int[][] TwoD = new int[4][5];// {{},{},{},{}}
        int k =0;
        for(int i=0;i<4;i++) {
            for (int j = 0; j < 5; j++) {
                TwoD[i][j] = k++;
            }
        }
        for(int i=0;i<4;i++){
            for(int j=0;j<5;j++){
                System.out.println(TwoD[i][j]);
            }
        }

    }
}
