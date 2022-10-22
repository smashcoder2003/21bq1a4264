package TextbookCodeSnippets.ForEach;

public class ForEach3 {
    public static void main(String[] args){
        int sum  = 0;
        int nums[][] = new int[3][5];
        for(int i = 0;i < 3 ; i++)
            for(int j = 0; j < 5; j++)
                nums[i][j] = (i+1) * (j+1);

        System.out.print("The elements in the array are: ");


        for(int x[]:nums){
            for(int y : x){
                System.out.println(y);
                sum += y;
            }
        }


        System.out.print("The summation of all the elements in the " +
                "multidimensional array is : ");
        System.out.println(sum);
    }
}
