package Sorting;

import java.util.Scanner;

public class MergeSort {
        static void mergeSort(int a[], int first, int last){
            int mid;
            if(first < last){
                mid = (first + last)/2;
                mergeSort(a,first,mid);
                mergeSort(a,mid+1,last);
                merge(a,first,mid,last);
            }
        }
        static void merge(int a[],int first, int mid,int last){
            int[] temp_array = new int[20];
            int i = first;
            int j = mid+1;
            int k = first;
            while(i <= mid && j <= last){
                if(a[i] <= a[j]){
                    temp_array[k] = a[i];
                    i++;
                }
                else{
                    temp_array[k] = a[j];
                    j++;
                }
                k++;
            }
            while(i<=mid)
                temp_array[k++] = a[i++];
            while(j<=last)
                temp_array[k++] = a[j++];
            for(i=first;i<=last;i++)
                a[i] = temp_array[i];
        }

     public static void main(String[] args) {
         int[] a =new int[20];
         Scanner s=new Scanner(System.in);
         int n;
         System.out.println("enter n value");
         n=s.nextInt();
         System.out.println("enter the array elements");
         for(int i=0;i<n;i++)
             a[i]=s.nextInt();
         mergeSort(a,0,n-1);
         System.out.println("elements after sorting are");
         for(int i=0;i<n;i++)
             System.out.println(a[i]);
     }
 }