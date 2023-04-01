#include<bits/stdc++.h>

using namespace std;
void subarraysumEqualsk(int arr[], int n, int k)
{
    int start=0, end=0;
    int currsum=0;

    while(end < n)
    {
        if(currsum == k)
        {
            cout << start << " " << end;
            return;
        }

        if(currsum > k)
        {
            currsum -= arr[start];
            start += 1;
            continue;
        } 

        else
        {
            currsum += arr[end];
            end += 1;
        }
    }
}
int main()
{
    int n;
    cout << "enter the no of elements for your array: ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) 
        cin >> arr[i];

    int k;
    cout << "enter value with which subarray sum should equal to: ";
    cin >> k;
    subarraysumEqualsk(arr, n, k);    
}