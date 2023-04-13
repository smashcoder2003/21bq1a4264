#include<iostream>

using namespace std;

void permutations(string str, string ans)
{
    if(str.length() == 0)
    {
        cout << ans << endl;
        return;
    } 
    
    
    for(int i=0; i<str.length(); i++)
    {
        char ch = str[i];
        string ros = str.substr(0,i) + str.substr(i+1);
        permutations(ros, ans + ch);
    }
    
}


int main()
{
    string str;
    cin >> str;
    permutations(str, "");
}