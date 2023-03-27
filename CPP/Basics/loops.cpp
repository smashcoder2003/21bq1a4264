#include<iostream>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("/Users/bunty/Documents/GitHub/21bq1a4264/CPP/Basics/input.txt", "r", stdin);
        freopen("/Users/bunty/Documents/GitHub/21bq1a4264/CPP/Basics/output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    cout<<sum;
}