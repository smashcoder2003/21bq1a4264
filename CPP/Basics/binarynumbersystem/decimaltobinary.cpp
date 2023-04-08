#include<bits/stdc++.h>

using namespace std;
int decimaltobinary(int num){
    int lastdigit;
    int pow = 1;
    int ans=0;

    while (pow<=num){
        pow *= 2;
    }

    pow /= 2;2^2

    while(pow > 0){
        lastdigit = num/pow;
        num -= lastdigit*pow;
        ans = ans*10 + lastdigit;
        pow/=2;       
    }

    return ans;
}
int main(){
    int number;
    cin >> number;

    cout << decimaltobinary(number);
}