#include<iostream>

using namespace std;

int binarytodecimal(int num){
    int x = 1; 
    int decimal = 0;
    while (num > 0) {
        int lastdigit = num % 10;
        decimal += lastdigit * x;
        x *= 2;
        num /= 10;
    }
    return decimal;
}

int main(){
    int number;
    cin >> number;
    
    cout << binarytodecimal(number);
}
