#include<iostream>

using namespace std;

void allPossibleSubStr(string str, string ans)
{
    if(str.length() == 0)
    {
        cout << ans << endl;
        return;    
    }
        
    char ch = str[0];
    allPossibleSubStr(str.substr(1), ans);
    allPossibleSubStr(str.substr(1), ans + ch);
}

int main()
{
    string str;
    cin >> str;
    allPossibleSubStr(str, "");
}