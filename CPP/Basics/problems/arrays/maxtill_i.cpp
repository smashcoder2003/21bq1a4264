#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;

int main() 
{  
    int n;
    cout << "enter the no of elements for your array: ";
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        cin >> arr[i]; 

    int mx = INT_MIN;

    for(int i=0; i<n; i++)
    {
        mx = max(mx, arr[i]);
        cout << "max till i: " << i << " " <<  mx << endl;
    }
}