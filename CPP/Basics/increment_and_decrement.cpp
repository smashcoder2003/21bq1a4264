#include<iostream>

using namespace std;

int main(){
    int i = 0, j = 0, k = 0;
    i = ++i - i++ - k++ + ++k + ++j - j++;
    cout<<i<<" "<<j<<" "<<k;
    return 0;
}