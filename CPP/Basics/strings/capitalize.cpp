#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1 = "ABCDEF";

    for(int i= 0;i<s1.size();i++)    
    {
        if('A' <= s1[i] && s1[i] <= 'Z' )
            s1[i] += 32;
    }
    cout << s1;


}