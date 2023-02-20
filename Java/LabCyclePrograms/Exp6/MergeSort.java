package LabCyclePrograms.Exp6;
import java.util.Scanner;

public class MergeSort {
    public static int swapcount;
        static void mergeSort(int[] a, int low, int high){
            int mid;
            if(low < high){
                mid = (low + high)/2;
                mergeSort(a,low,mid);
                mergeSort(a,mid+1,high);
                merge(a,low,mid,high);
            }
        }
        static void merge(int a[],int low, int mid,int high){
            int[] temp_array = new int[a.length];
            int i = low;
            int j = mid+1;
            int k = low;
            while(i <= mid && j <= high){
                if(a[i] <= a[j]){
                    temp_array[k++] = a[i++];

                }
                else{
                    temp_array[k++] = a[j++];
                }
            }
            while(i<=mid)
                temp_array[k++] = a[i++];
            while(j<=high)
                temp_array[k++] = a[j++];
            for(i=low;i<=high;i++){
                if (a[i] != temp_array[i]) swapcount++;
                a[i] = temp_array[i];
            }
        }

     public static void main(String[] args) {
         int[] a = new int[20];
         Scanner s = new Scanner(System.in);
         int n;
         System.out.println("enter size of the array value: ");
         n=s.nextInt();
         System.out.println("enter the array elements");
         for(int i=0;i<n;i++)
             a[i]=s.nextInt();
         mergeSort(a,0,n-1);
         System.out.println("elements after sorting are");
         for(int i=0;i<n;i++){
             System.out.println(a[i]);
         }
         //System.out.println("The no of swaps that occurred in the sorting process are: " + swapcount);
     }
}
