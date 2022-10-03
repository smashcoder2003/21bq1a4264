package TextbookCodeSnippets.Arrays;
// Calculating the average of all the elements of an array
public class Average {
    public static void main(String[] args){
        double[] nums = {11.2,12.3,45.6,23.9};
        double result = 0;
        // for num in nums
        for (double num : nums) {
            result += num;
        }
        System.out.println("The average of all the elements of an array is: "+ (result/nums.length));
    }
}
