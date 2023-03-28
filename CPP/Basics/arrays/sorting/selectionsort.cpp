#include<bits/stdc++.h>

using namespace std;
void selectionsort(int arr[], int n) {

    for(int i=0; i<n; i++) {
        int key = i;

        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[key]) key = j;
        }

        int temp = arr[i];
        arr[i] = arr[key];
        arr[key] = temp;

    }
}
int main() {
    int n;
    cout << "enter no of elements for the array: ";
    cin >> n;
    int arr[n];

    for(int i =0; i<n; i++) 
        cin >> arr[i];

    selectionsort(arr, n);
    
    cout << "the elements after sorting are: " << endl;
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
}