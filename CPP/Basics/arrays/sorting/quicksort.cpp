#include<iostream>

using namespace std;

int partitionIndex(int arr[], int low, int high)
{
    int pivot = arr[low];
    int piIndex = 0;
    for(int i=low; i<=high; i++){
        if(arr[i] < pivot)
        {
            int temp = arr[piIndex];
            arr[piIndex++] = arr[i];
            arr[i] = temp;
        }
    }
    return piIndex;
}

void quickSort(int arr[], int low, int high)
{
    if(low<high)
    {
        int pi = partitionIndex(arr, low, high);
        quickSort(arr,low, pi);
        quickSort(arr, pi+1, high);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    cout << "The elements after sorting are: ";
    quickSort(arr, 0, n-1);
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
}