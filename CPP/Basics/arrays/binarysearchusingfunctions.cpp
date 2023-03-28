#include<bits/stdc++.h>

using namespace std;

int binarysearch(int arr[], int n, int key){
    int low =0, high = n-1;

    while(low <= high) {
        int mid = (low + high)/2;

        if(arr[mid] < key) 
            low = mid + 1;

        else if(arr[mid] > key) 
            high = mid - 1;

        else if(arr[mid] == key) {
            cout << "key found: " << key << " " << "index: " << mid;
            return mid;
        } 
    }
    return -1;
}
int main() {
    int n;
    cout << "enter no of elements for your array: ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) 
        cin >> arr[i];

    int key;
    cout << "enter the key element: ";
    cin >> key;
    binarysearch(arr, n, key);
}