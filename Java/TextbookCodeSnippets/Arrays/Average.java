package TextbookCodeSnippets.Arrays;
// Calculating the average of all the elements of an array
public class Average {
    public static void main(String[] args){
        int nums[]={1,2,3,4};
        double result = 0;
        // for num in nums
        for (double num : nums) {// for x in nums:
            result += num;
        }
        System.out.println("The average of all the elements of an array is: "+ (result/nums.length));
    }
}
