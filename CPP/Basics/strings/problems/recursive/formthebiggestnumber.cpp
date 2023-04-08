#include<iostream>
#include<string>

using namespace std;

string biggestnumber(string s)
{
    sort(s.begin(), s.end(), greater<int>());
    return s;
}

int main()
{
    string a;
    cin >> a;
    // string resultant ="";
    // char c;
    // while(a.length() != 0){
   
    //     c = a[0];
    //     for(int i=0; i<a.size(); i++){
    //         if(a[i] > c)
    //             c = a[i];
    //     }
    //     resultant += c;
    //     a.erase(a.find(c));
    // }
    // cout << resultant;
    cout << biggestnumber(a);
    
}