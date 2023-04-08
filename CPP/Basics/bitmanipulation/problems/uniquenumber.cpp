#include<iostream>

using namespace std;

int uniques(int arr[], int n)
{
    int xorsum =0;
    for(int i=0; i<n; i++)
    {
        xorsum = xorsum ^ arr[i];
        cout << "i: " << i << " " << xorsum << endl; 
    }

    return xorsum;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        cin >> arr[i];
    uniques(arr, n); 
}