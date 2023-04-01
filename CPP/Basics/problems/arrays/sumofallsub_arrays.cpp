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
    
    for(int i=0; i<n; i++)
    {
        int c_sum = 0;
        for(int j=i; j<n; j++)
        {
            c_sum += arr[j];
            cout << c_sum << endl;
        }
    }
}