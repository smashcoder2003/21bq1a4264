#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    cout << "enter the dimensions of the array: ";
    cin >> m >> n;

    int arr[m][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> arr[i][j];
    
    int key;
    cout << "enter the key to find: ";
    cin >> key;

    bool flag=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if (arr[i][j] == key)
            {
                flag = 1;
                cout << "key: " << key << " found at: " << "arr[" << i
                << "][" << j << "]";
                return 0; 
            }
        }
    }
    if(!flag)
        cout << "key not found.";
}