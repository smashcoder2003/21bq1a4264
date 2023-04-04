#include<iostream>

using namespace std;

void subSet(int arr[], int n)
{
    for(int i=0; i < (1 << n); i++)
    {
        for(int j=0; j<i; j++)
        {
            if((i & (1 << j)) != 0)
                cout << arr[j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=n; i>0; i--)
        arr[n-i] = n-i+1;
    
    subSet(arr, n);
}