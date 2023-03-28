#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout << "enter the size of the array: ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "enter the key element: ";
    cin >> key;

    for(int i=0; i<n;i++){
        if(arr[i] == key) {
            cout << "key found: " << key << " " << "index: " << i;
            break;
        }
    }
}