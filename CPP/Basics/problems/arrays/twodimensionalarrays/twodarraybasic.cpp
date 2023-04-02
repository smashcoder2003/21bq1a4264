#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    cout << "enter the dimensions of the matrix: ";
    cin >> m >> n;

    int arr[m][n];

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> arr[i][j];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}