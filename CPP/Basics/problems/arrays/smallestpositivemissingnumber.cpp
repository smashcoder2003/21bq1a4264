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

    int max = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > max) max = arr[i];
    }


    bool flags[max+1];
    for(int i=0; i<n; i++)
    {
        if (arr[i] > 0)
        flags[arr[i]] = 1;
    }

    int i;
    for(i=1;i<max+1;i++)
    {
        if(flags[i] == 0){
            cout << i << endl;
            break;
        }
    }
    if(i==max+1)
        cout << -1;
}