#include<iostream>
#include<climits>
#include<string>


using namespace std;

int main()
{
    int n;
    cout << "enter the no of elements for your array: ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n;i++)
        cin >> arr[i];
    
    for(int i=0; i<n; i++)
    {
        string subarray="";
        for(int j=i; j<n; j++)
        {
            subarray = subarray + to_string(arr[j]) + " ";
            cout << subarray << endl;
        }
    }
}