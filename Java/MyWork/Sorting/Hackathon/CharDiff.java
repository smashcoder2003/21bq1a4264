package MyWork.Sorting.Hackathon;

public class CharDiff {
        public static void main(String[] args){

            String S1 = "world";
            String S2 = "hello";
            int[] arr = new int[S1.length()];
            int[] arr2  = new int[S1.length()];
            int sum = 0;
            for(int i = 0;i<S1.length();i++){
                arr[i] = S1.charAt(i);
                System.out.println(arr[i]);
            }
            for(int i = 0;i<S2.length();i++){
                arr2[i] = S2.charAt(i);
                System.out.println(arr2[i]);
            }
            for(int i =0; i<arr.length;i++){
                sum += (arr[i]- arr2[i]);
            }
            System.out.println("sum is:" + sum);
        }
}

