#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int m,n;
    cout << "enter the dimensions of the array: ";
    cin >> m >> n;

    int arr[m][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin >> arr[i][j];
    }


    int row_start=0, row_end = n-1, col_start = 0, col_end = m-1;
    while (row_start <=row_end)
    {
        
        for(int j=col_start; j<=col_end; j++)
        {
                cout << arr[row_start][j] << " ";
        } cout << endl;
        row_start += 1;


        for(int i=row_start; i<=row_end; i++)
        {
            cout << arr[i][col_end] << " ";
        } cout << endl;
        col_end -= 1;


        for(int i=col_end; i>=col_start;i--)
        {
            cout << arr[row_end][i] << " ";
        } cout << endl;
        row_end -= 1;


        for(int i =row_end; i>=row_start; i--)
        {
            cout << arr[i][col_start] << " ";
        } cout << endl;
        col_start += 1;
        
            
    }
        
}
