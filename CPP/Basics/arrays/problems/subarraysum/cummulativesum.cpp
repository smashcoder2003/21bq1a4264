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


    int cummulative[n+1];
    
    for(int i=1; i<n+1; i++)
    {
        cummulative[i] = cummulative[i-1] + arr[i-1];
    }

    int max_sum=INT_MIN;
    for(int i=1; i<n+1; i++)
    {
        int currsum=0;
        for(int j=0; j<i; j++)
        {
            
            currsum = cummulative[i] - cummulative[j];
            max_sum = max(max_sum, currsum);
        }
    }
    cout << max_sum << endl;
}