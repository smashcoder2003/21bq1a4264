#include<iostream>

using namespace std;
bool r_isSorted(int arr[], int n)
{
    if(n==1)
        return true;
    else
    return arr[0] < arr[1] && r_isSorted(arr+1, n-1);
}
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    cout << r_isSorted(arr, n); 
}    