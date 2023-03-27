#include<iostream>

using namespace std;
int sumOfNaturalNumbers(int num){
    return (num*(num+1))/2;
}
int main(){
    int n;
    cin >> n;
    cout << sumOfNaturalNumbers(n);
}