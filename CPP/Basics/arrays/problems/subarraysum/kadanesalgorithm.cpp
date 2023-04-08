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

    int highest_sum=INT_MIN, c_sum=0;
    for(int i=0; i<n;i++)
    {
        c_sum += arr[i];
        if(highest_sum < c_sum) highest_sum = c_sum;
        if(c_sum < 0) c_sum = 0;
    }
    cout << highest_sum;
}