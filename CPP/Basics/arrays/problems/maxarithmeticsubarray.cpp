#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "enter the number of elements for your array: ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int pd = arr[1] - arr[0];
    int curr=2, highest=2;

    for(int i=2; i<n; i++)
    {
        if(arr[i] - arr[i-1] == pd)
            curr++;
        else
        {
            pd = arr[i] - arr[i-1];
            highest = max(curr, highest);
            curr= 2;
        }
    }
    
    highest = max(curr, highest);
    cout << highest;
}