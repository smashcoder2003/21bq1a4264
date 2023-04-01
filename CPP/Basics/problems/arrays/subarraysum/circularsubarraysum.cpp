#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "enter the no of element for your array: ";
    cin >> n;

    
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int wrapsum=0;
    int max_sum = INT_MIN, curr_sum =0;
    int min_sum = INT_MAX, curr_sum2 = 0;

    for(int i=0; i<n; i++)
    {
        curr_sum += arr[i];
        curr_sum2 += arr[i];
        wrapsum += arr[i];
        if (curr_sum > max_sum) max_sum = curr_sum;
        if (curr_sum < 0) curr_sum = 0;
        if(curr_sum2 < min_sum) min_sum = curr_sum2;
        if(curr_sum2>0) curr_sum2 = 0;
    }

    cout << max(max_sum, (wrapsum - min_sum));
}