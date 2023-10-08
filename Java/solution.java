import java.util.*;

class Solution {
    int bsum(String s){
        int a=0,b=0;
        int[] count = new int[26];

        // Setting the frequency of each character
        for(int i=0;i<s.length();i++) {
            count[s.charAt(i)-'a']++;
        }

        // Sorting the frequencies so that 
        Arrays.sort(count);
        int i=0;
        int j=count.length-1;
        while(i<j){
            if(count[i]!=0){
                    a=count[i];
                break;}
            i++;
        }

        while(i<j){
            if(count[j]!=0){
                b=count[j];
                break;}
            j--;
        }
        return b-a;
    }
    public int beautySum(String s) {
        int sum=0;
        List <String> list= new ArrayList<>();
        int i=0;
        int j=s.length()-1;
        while(i<j){
            j=s.length()-1;
            while(i<j){
                list.add(s.substring(i,j+1));
                j--;
            }
            i++;
        }
        for(i=0;i<list.size();i++){
            int result=bsum(list.get(i));
            sum=sum+result;
        }
        return sum;
    }
}