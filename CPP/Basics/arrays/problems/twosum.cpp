#include<iostream>
#include<climits>

using namespace std;
bool twosum(int arr[], int n, int k)
{
    int mx=INT_MIN;
    for(int i=0; i<n; i++)
    {
        mx = max(mx, arr[i]);
    }

    bool pair[mx+1];

    for(int i=0; i<n; i++)
    {

        if(arr[i] < k)
        {
            if(pair[k-arr[i]])
            {
                cout << k - arr[i] << " " << arr[i] << endl;
                return 1;
            }
            else 
            {
                pair[arr[i]] = 1;
            }
        }
        
    }
    return 0;    
}


int main()
{
    int n;
    cout << "enter the no of elements for your array: " << endl;
    cin >> n;
    int k;
    cout << "enter the k value: " << endl;
    cin >> k;

    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    cout << to_string(twosum(arr, n, k));
}