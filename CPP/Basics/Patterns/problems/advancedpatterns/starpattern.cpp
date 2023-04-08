#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n;i++){
        for(int j=1;j<=n*2-1;j++){
            if(j<=n-i || j > (n*2-1)-(n-i)){
                cout<<" ";
            }
            else { 
                cout<<"*";
            }
        }
        cout<<endl;
    }

    for(int i=n; i>=1;i--){
        for(int j=2*n-1;j>=1;j--){
            if(j<=n-i || j>(n*2-1)-(n-i)){
                cout<<" ";
            }
            else {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}