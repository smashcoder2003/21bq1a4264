#include<bits/stdc++.h>

using namespace std;
int linearsearch(int arr[], int n, int key) {

    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
            cout << "key found: " << key << " " << "index: " << i << endl;
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "enter the size of an array: ";
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++) 
        cin >> arr[i];

    int key;
    cout << "enter the key: ";
    cin >> key;

    linearsearch(arr, n, key);
}