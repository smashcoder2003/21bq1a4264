#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int m, n;
    cin >> m >> n;

    int arr[m][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin >> arr[i][j];
    }

    int key;
    cin >> key;
    int i=0 , j=n-1;
    bool found =0;
    while(i<m && j>=0)
    {
        if(arr[i][j] == key){
            found = 1;
            break;
        }
        
        else if(arr[i][j] < key)
            {
                i++;
            }

        else if(arr[i][j] > key)
             j--;
    }
    if(found) cout << "element exists";
    else cout << "element doesn't exist";
    

    
}