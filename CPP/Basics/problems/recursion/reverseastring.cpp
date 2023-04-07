#include<iostream>

using namespace std;

string rstring(string s, int n, int i)
{
    string r = "";
    if(i==n)
        return r;

    else
        r += rstring(s, n, i+1);
        r += s[i];
        return r;
    
}

string rstring2(string s, int n, int i)
{   
    if(i==n)
        return "";
    else
        return rstring2(s, n, i+1) + s[i];
}
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    cout << rstring2(s, n, 0);
    
}