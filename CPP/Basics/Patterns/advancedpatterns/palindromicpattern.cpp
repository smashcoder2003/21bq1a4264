#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            if(j<=i){
                cout<<j;
            } else{
                cout<<" ";
            }
        }
        if(i>1){
            for(int k=1;k<i;k++){
                cout<<k+1;
            }
        }   
        cout<<endl; 
    }
        
    }
