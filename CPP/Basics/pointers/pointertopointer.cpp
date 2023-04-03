#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a=10;
    int *ptr = &a;
    int **pptr = &ptr;
    cout << "ptr: " << ptr << endl;
    cout << "*ptr:" << *ptr << endl;
    cout << "pptr: " << pptr << endl;
    cout << "*pptr: " << *pptr << endl;
    cout << "**pptr: " << **pptr << endl;
}