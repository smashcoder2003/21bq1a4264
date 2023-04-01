#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "enter the no of elements for your array: ";
    cin >> n;


    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int N = arr[0];
    for(int i=0; i<n; i++)
        N = max(N, arr[i]);

    int idx[N+1];

    int minidx = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(idx[arr[i]] != 0)
        {
            minidx = min(minidx, arr[i]);
        }
        else
            idx[arr[i]] = i;
    }
    cout << "The first repeating element is: " << arr[minidx] << "at idx: " 
    << minidx;


}