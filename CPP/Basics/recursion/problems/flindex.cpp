#include<iostream>

using namespace std;

int firstindex(int arr[], int key, int n, int i)
{
    if(i==n)
        return -1;
    else if(arr[i] == key)
        return i;
    else
        return firstindex(arr, key, n, i+1);

}

int lastindex(int arr[], int key, int n, int i)
{
    if(i==n)
        return -1;
    int result = lastindex(arr, key, n, i+1);
    
    if(result!= -1)
        return result;
    if(arr[i] == key)
        return i;
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int number;
    cin >> number;

    cout << firstindex(arr, number, n, 0) << endl;
    cout << lastindex(arr, number, n, 0) << endl;
}