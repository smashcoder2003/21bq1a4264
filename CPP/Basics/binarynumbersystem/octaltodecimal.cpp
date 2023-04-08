#include<iostream>

using namespace std;
int octaltodecimal(int num){
    int pow =1;
    int decimal = 0;
    int lastdigit =0;
    while(num > 0){
        lastdigit = num %10;
        decimal += lastdigit * pow;
        pow *= 8;
        num /= 10;
    }
    return decimal;
}
int main(){
    int number;
    cin >> number;
    
    cout << octaltodecimal(number);
}