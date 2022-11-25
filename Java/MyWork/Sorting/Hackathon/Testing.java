package MyWork.Sorting.Hackathon;

import java.util.Arrays;
import java.util.Collections;

public class Testing{
    public static void main(String[] args){
     String s1 = "senass";
     s1 = s1.toLowerCase();
     int arr[] = new int[s1.length()];


     for(int i = 0; i< s1.length();i++){
         arr[i] = s1.charAt(i);
        System.out.println(arr[i]);
     }
     int a = 10;
     char c  = 10;
        Arrays.sort(arr);

    }
}