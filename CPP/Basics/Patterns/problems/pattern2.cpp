#include<iostream>

using namespace std;

int main(){
    int row, col;
    cin>>row>>col;
    for(int i=0; i<row;i++){
        
        for(int j=0; j<col;j++){
            if (i==0 || j==0 || i == row-1 || j == col-1){
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}