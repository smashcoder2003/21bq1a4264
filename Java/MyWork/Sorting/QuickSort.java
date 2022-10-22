package MyWork.Sorting;
import java.util.Arrays;

public class QuickSort {


    static void swap(int arr[], int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    static int partionIndex(int arr[], int start, int end) {
        int pIndex = start;
        int pivot = arr[end];
        for (int i = start; i < end; i++) {
            if (arr[i] < pivot) {
                swap(arr, pIndex, i);
                pIndex++;
            }
        }
        swap(arr, pIndex, end);
        return pIndex;
    }

    static void quickSort(int arr[], int start, int end) {
        if (start < end) {
            int pi = partionIndex(arr, start, end);
            quickSort(arr, start, pi - 1);
            quickSort(arr, pi + 1, end);
        }
    }

    public static void main(String[] args) {
        int[] arr = {11, 2, 3, 5, 23, 64, 9};
        int start = 0, end = arr.length;
        quickSort(arr, start, end -1);
        System.out.println("The array after sorting is : ");
        System.out.println(Arrays.toString(arr));
    }

}
