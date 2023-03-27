#include<iostream>

using namespace std;

int main(){
    int savings;
    #ifndef ONLINE_JUDGE
        freopen("/Users/bunty/Documents/GitHub/21bq1a4264/CPP/input.txt", "r", stdin);
        freopen("/Users/bunty/Documents/GitHub/21bq1a4264/CPP/output.txt", "w", stdout);
    #endif

    cin>>savings;

    if (savings > 5000){
        if (savings > 10000){
            cout<<"roadtrip with neha";
        }

        else {
            cout<<"shopping with neha";
        }

    } else if (savings > 2000) {
        cout<<"Date with priya";
    } 
    
    else {
        cout<<"Date with ooha";
    }
}