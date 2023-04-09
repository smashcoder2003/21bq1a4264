#include<iostream>

using namespace std;
 
 void allpossiblesubStr(string str, string ans)
 {
    if(str.length() == 0){
        cout << ans << endl;
        return;
    }

    char ch = str[0];
    allpossiblesubStr(str.substr(1),ans);
    allpossiblesubStr(str.substr(1), ans + ch);
 }
 int main()
 {
    string str;
    cin >> str;
    allpossiblesubStr(str, "");
 }