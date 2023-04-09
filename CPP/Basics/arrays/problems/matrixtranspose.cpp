#include<bits/stdc++.h>
using namespace std;
const int m=3, n=4;


void matrixtranspose(int arr[m][n], int m, int n)
{
    int transpose[n][m];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            transpose[j][i] = arr[i][j];
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}


int main()
{    
    cout << "enter the dimensions of the matrix: ";
    int arr[m][n];

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            cin >> arr[i][j];
    }
    
    matrixtranspose(arr, m, n);

}