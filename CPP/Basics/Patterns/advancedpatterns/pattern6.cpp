#include<iostream>

using namespace std;

int main(){
    int n;
    #ifndef ONLINE_JUDGE
            freopen("/Users/bunty/Documents/GitHub/21bq1a4264/CPP/input.txt", "r", stdin);
            freopen("/Users/bunty/Documents/GitHub/21bq1a4264/CPP/output.txt", "w", stdout);
    #endif
    cin>>n;
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            if ((i+j) % 2==0){
                cout<<0;
            } else {
                cout<<1;
            }
        }
        cout<<endl;

    }
}