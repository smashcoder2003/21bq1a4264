#include <bits/stdc++.h>

using namespace std;

int hexadecimaltodecimal(string num) {
    int pow=1;
    int lastdigit=0, decimal = 0;
    
    for(int i=num.size()-1;i>=0;i--){
        if(num[i] >= '0' && num[i] <= '9'){
            lastdigit = num[i] - '0';
            decimal += lastdigit * pow;
            pow*= 16;
        } else if (num[i] >= 'A' && num[i] <= 'F'){
            lastdigit = num[i] - 'A';
            decimal += (lastdigit + 10)* pow;
            pow*=16;
        }
    }
    return decimal;
}

int main(){
    string number; 
    cin >> number;
    cout << hexadecimaltodecimal(number);
}