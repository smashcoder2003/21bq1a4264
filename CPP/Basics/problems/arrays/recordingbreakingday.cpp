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

    int maxtill_i=INT_MIN;
    int record_breaking_days=0;

    for(int i=0; i<n; i++)
    {
        

        if(i==0 && arr[i] > arr[i+1]) 
            record_breaking_days++;

        else if (i==n-1 && arr[i] > maxtill_i) 
            record_breaking_days++;

        else if(arr[i] > maxtill_i && arr[i] > arr[i+1])
                record_breaking_days++;

        maxtill_i = max(arr[i], maxtill_i);
        
    }

    cout << "The number of record breaking days are: " << record_breaking_days;

}