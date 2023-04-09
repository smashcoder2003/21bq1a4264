#include<iostream>

using namespace std;

string removeduplicates(string str){
    if(str.length() == 0)
        return "";
        
    string ans = removeduplicates(str.substr(1));
    
    if(ans[0]==str[0]){
        return ans;
    }
    else 
        return str[0] + ans;
}
int main()
{
    string str;
    cin >> str;
    cout << removeduplicates(str);

}