#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout << "enter no of elements for your array: " << endl;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int min = INT_MAX, max = INT_MIN;
    // Time comlexity of the loop is O(N)
    for(int i=0;i<n;i++){
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    cout << "The max element in the array is: " << max << endl;
    cout << "The min element in the array is: " << min << endl;
}