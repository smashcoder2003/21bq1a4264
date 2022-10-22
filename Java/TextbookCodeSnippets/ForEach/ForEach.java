package TextbookCodeSnippets.ForEach;

public class ForEach {
    public static void main(String[] args) {
        int nums[] = {1,23,11,23};
        int sum = 0;
        for(int x:nums ){
            System.out.println(x);
            sum += x;
        }
        System.out.println("The summation of all the values is" + sum);
    }


}
