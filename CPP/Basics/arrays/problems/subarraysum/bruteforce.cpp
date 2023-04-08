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


    int max_sum = INT_MIN;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++) 
                sum += arr[k];
            if(sum > max_sum) 
                max_sum = sum;
        }
    }
    cout << max_sum;
}