#include<bits/stdc++.h>

using namespace std;


int main()
{

    int n;
    cin >> n; 
    cin.ignore();


    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();

    
    int i=0, currLen=0, maxLen=INT_MIN;
    while(arr[i] != '\0')
    {
        if(arr[i] == ' ')
        {
            if(currLen > maxLen)
                maxLen = currLen;
            currLen = 0;
        }
        else   
            currLen++;
        i++;
    }
    cout << max(currLen, maxLen);
}