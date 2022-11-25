import java.util.*;
class BubbleSort {
    public static void main(String[] args) {
        int[] a = {1,12,43,45,65,11,10};
        int n = a.length;
        for(int i =0 ; i< n-1;i++) {
            for(int j= 0;j<a.length-i-1;j++){
                if (a[j] > a[j+1]) {
                    int t = a[j];
                    a[j] = a[j+1];
                    a[j+1] = t;
                }
            }
        }
        System.out.println(Arrays.toString(a));
    }
}

