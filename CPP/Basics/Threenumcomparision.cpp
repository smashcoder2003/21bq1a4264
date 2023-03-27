#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    #ifndef ONLINE_JUDGE
        freopen("/Users/bunty/Documents/GitHub/21bq1a4264/CPP/Basics/input.txt", "r", stdin);
        freopen("/Users/bunty/Documents/GitHub/21bq1a4264/CPP/Basics/output.txt", "w", stdout);
    #endif
    cin>>a;
    cin>>b;
    cin>>c;
    if (a>b){
        if (a>c){
            cout<<a;
        } else {
            cout<<c;
        }
        
    } else if (b>c){
        cout<<b;
    } else {
        cout<<c;
    }

}