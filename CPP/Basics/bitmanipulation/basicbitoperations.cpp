#include<iostream>

using namespace std;

int getBit(int n, int pos)
{
    return ((1<<pos) & n)!=0 ? 1: 0;
}

int setBit(int n, int pos)
{
    return ((1<<pos) | n);
}

int clearBit(int n, int pos)
{
    return (~(1<<pos) & n);
}

int updateBit(int n, int pos, int bit)
{
    return bit == 1 ? ((1<<pos)| n) : (~(1<<pos) & n);\
}

int main()
{
    int number;
     cout << "enter a number: ";
    cin >> number;

    int pos;
    cout << "enter positon for bit manipulation: ";
    cin >> pos;
    
    int value;
    cin >> value;
    cout << getBit(number, pos);
    cout << updateBit(number, pos, value);
}