#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n+1];
    cin >> arr;
    int i=0, j=n-1;
    while(i<j)
    {
        if(arr[i] == arr[j])
        {
            i++;j--;
        }
        else break;
    }
    if(i>=j) cout << "palindrome";
    else cout << "not a palindrome";
}