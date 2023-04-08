#include<iostream>

using namespace std;

int main(){
    int row, column;
    cout<<"enter row column:";
    cin>>row>>column;

    for(int i= 0; i<row;i++){

        for(int j=0; j<column;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
}