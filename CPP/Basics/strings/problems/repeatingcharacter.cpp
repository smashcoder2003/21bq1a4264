#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int arr[26];
    for(int i=0; i<26;i++)
        arr[i] =0;

    for(int i=0; i<s.length(); i++){
        arr[s[i] - 'a'] += 1;
    }

    int mx=0;
    for(int i=0; i<26;i++)
    {
        if(arr[i] > arr[mx])
            mx=i;
    }
    cout << char(mx + 'a');
}