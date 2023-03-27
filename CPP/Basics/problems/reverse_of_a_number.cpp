#include<iostream>

using namespace std;

int main(){
    int number, lastdigit, reverse=0;
    cin>>number;
    while(number!=0){
    lastdigit = number % 10;
    reverse = reverse*10 + lastdigit;
    number = number / 10;

    }
    cout<<reverse;
}