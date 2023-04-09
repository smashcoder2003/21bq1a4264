#include<iostream>

using namespace std;

void substrwithAscii(string str, string ans)
{
    // bc
    if(str.length() == 0)
    {
        cout << ans << "\t";
        return;
    }

    char ch = str[0];
    substrwithAscii(str.substr(1), ans);
    substrwithAscii(str.substr(1), ans + ch);
    substrwithAscii(str.substr(1), ans + to_string(int(ch)));
    cout << endl;
}

int main()
{
    string str;
    cin >> str;
    substrwithAscii(str, "");
}