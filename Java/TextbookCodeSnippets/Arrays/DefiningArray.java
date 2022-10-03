package TextbookCodeSnippets.Arrays;

public class DefiningArray {
    public static void main(String[] args){
        int[] month_days = new int[12];
        for(int i =0;i<month_days.length;i++){
            month_days[i] = i;
            System.out.println(month_days[i]);
        }
    }
}
