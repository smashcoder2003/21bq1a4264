#include<iostream>
#include<string>

using namespace std;

void substrwithAscii(string str , string ans)// b , a
{
    if(str.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = str[0];
    substrwithAscii(str.substr(1), ans);
    substrwithAscii(str.substr(1), ch + ans);
    substrwithAscii(str.substr(1), to_string(int(ch)) + ans);
}

int main() 
{
    string str;
    cin >> str;
    substrwithAscii(str, "");
}