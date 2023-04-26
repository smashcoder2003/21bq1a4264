#include<iostream>

using namespace std;

void merge(int arr[], int low, int high, int mid, int n) 
{
    int temp[n];
    int p1 = low; 
    int p2 = mid+1;
    int p3 = low;

    while(p1<=mid && p2<=high)
    {
        if(arr[p1] <= arr[p2])
        {
            temp[p3++] = arr[p1++];   
        }

        else
        {
            temp[p3++] = arr[p2++];
        }
    }

    while(p1 <= mid){
        temp[p3++] = arr[p1++];
    }

    while(p2 <= high){
        temp[p3++] = arr[p2++];
    }

    for(int i=low; i <= high; i++)
        arr[i] = temp[i];
}

void mergesort(int arr[], int low, int high, int n) 
{
    if(low<high) {
        int mid = (low + high) / 2;
        mergesort(arr, low, mid, n);
        mergesort(arr, mid+1, high, n);
        merge(arr, low, high, mid, n);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n;i++) {
        cin >> arr[i];
    }
    mergesort(arr, 0, n-1, n);
    cout << "the elements after sorting are : " << endl;

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}