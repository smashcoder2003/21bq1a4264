#include<bits/stdc++.h>

using namespace std;
int merge(int arr[], int low, int high, int mid) {
    int temp[sizeof(arr)/ sizeof(arr[0])];
    int p1 = low; 
    int p2 = high;
    int p3 = low;
    while(p1<=mid && p2<=high)
}

void mergesort(int arr[], int low, int high) {
    while(low<high) {
        int mid = (low + high) /2;
        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);
        merge(arr, low, high, mid);
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for(int=0; i<n;i++) {
        cin >> arr[i];
    }
    mergesort(arr, low, high);
    cout << "the elements after sorting are : " << endl;

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}