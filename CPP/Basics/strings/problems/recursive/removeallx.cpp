#include<iostream>

using namespace std;

string moveallX(string str)
{
    if(str.length()==0)
        return "";

    string ans = moveallX(str.substr(1));

    if(str[0] == 'x')
        return ans + str[0];

    else  
    return str[0] + ans; 
}
int main()
{
    string str;
    cin >> str;
    cout << moveallX(str);
}