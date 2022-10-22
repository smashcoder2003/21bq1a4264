package TextbookCodeSnippets.ForEach;

public class Search {
    public static void main(String[] args){
        int nums[] = { 11,2,23,34,64,9,4};
        int value = 4;
        boolean found = false;
        for(int x: nums){
            if(value == x){
                System.out.println("The value has been found.");
                break;
            }
        }
    }
}
