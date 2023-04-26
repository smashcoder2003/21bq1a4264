#include<bits/stdc++.h>

using namespace std;

void waveSort(int arr[], int n)
{
    for(int i=1; i<=n-2; i+=2)
    {
        if(arr[i] > arr[i-1])
            swap(arr[i], arr[i-1]);
        if(arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    waveSort(arr, n);
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
}