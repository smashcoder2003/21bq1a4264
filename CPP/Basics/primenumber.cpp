#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int number;
    cin>>number;
    int flag=0;
    for(int i=2;i<=sqrt(number);i++){
        if (number%i==0){
            flag =1;
            break;
        }   
    }
    if(flag==1){
        cout<<"not prime";
    }
    else{
        cout<<"prime";
    }
}