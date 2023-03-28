#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout << "enter no of element for your arrar: ";
    cin >> n;
    int arr[n];

    for (int i =0;i<n;i++){
        cin >> arr[i];
    }

    cout << "element in your array are: " << " " << endl;
    
    for (int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
}