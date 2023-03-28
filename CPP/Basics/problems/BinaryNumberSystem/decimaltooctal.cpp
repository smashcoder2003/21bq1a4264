#include<bits/stdc++.h>

using namespace std;

int decimaltooctal(int num){
    int pow = 1;

    while (pow<=num)
        pow*=8;
    pow/=8;

    int octal=0;
    while(pow>0){
        int lastdigit = num/pow;
        num -= lastdigit*pow;
        octal = octal*10 + lastdigit;
        pow/=8;
    }
    return octal;
}
int main(){
    int number;
    cin >> number;
    cout << decimaltooctal(number);
}