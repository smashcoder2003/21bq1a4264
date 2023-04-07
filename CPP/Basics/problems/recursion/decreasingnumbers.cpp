#include<iostream>
 
using namespace std;
void decreasingNumbers(int n)
{
    if(n==1)
    {
        cout << 1;
        return;
    }
    
    else
        cout << n << " ";
        return decreasingNumbers(n-1);
}

int main()
{
    int n;
    cin >> n;
    decreasingNumbers(n);
}