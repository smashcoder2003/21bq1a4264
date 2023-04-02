#include<bits/stdc++.h>

using namespace std;

int main() 
{
    #ifndef ONLINE_JUDGE
        freopen("/Users/bunty/Documents/GitHub/21bq1a4264/CPP/input.txt", "r", stdin);
        freopen("/Users/bunty/Documents/GitHub/21bq1a4264/CPP/output.txt", "w", stdout);
    #endif

    int m1, n1;  
    cin >> m1 >> n1;


    int arr1[m1][n1];

    for(int i=0; i<m1; i++)
    {
        for(int j=0; j<n1; j++)
            cin >> arr1[i][j];
    }
    


    int m2, n2;
    cin >> m2 >> n2;

    int arr2[m2][n2];

    for(int i=0; i<m2; i++)
    {
        for(int j=0; j<n2; j++)
            cin >> arr2[i][j];
    }


    int arr[m1][n2];
    for(int i=0; i<m1; i++){
        for(int j=0; j<n2; j++)
            arr[i][j] = 0;
    }
    
    for(int i=0; i<m1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            for(int k=0; k<n1; k++)
            {
                arr[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }

    for(int i=0; i<m1; i++)
    {
        for(int j=0; j<n2; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    
}