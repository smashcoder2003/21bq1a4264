#include<bits/stdc++.h>

using namespace std;
void increment(int *a)
{
    *a += 1;
}


int main()
{
    int a=10;
    cout << a << endl;
    increment(&a);
    cout << a << endl;
}