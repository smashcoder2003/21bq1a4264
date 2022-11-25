package MyWork.Sorting.Hackathon;

import java.sql.SQLOutput;

public class VowelCount {
    public static void main(String[] args){
        String S = "aljfdaahdsf";
        char[] S1 = S.toCharArray();
        String vowels = "aeiou";
        char[] vowels1 = vowels.toCharArray();
        int count = 0;
        for(int i = 0;i<vowels1.length;i++){
            for(int j = 0;j<S1.length;j++){
                if(vowels1[i] == S1[j]){
                    count++;
                }
            }
        }
        System.out.println(count);

    }
}
