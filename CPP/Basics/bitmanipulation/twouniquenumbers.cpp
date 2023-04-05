#include<iostream>

using namespace std;

int main()
{
    int arr[8] = {1, 3, 5, 2, 4, 5, 3, 1};
    int xorsum =0;


    for(int i=0; i<8; i++)
        xorsum = xorsum ^ arr[i];
    
    int setbit =0, pos=0;
    while(setbit==0)
    {
        setbit = xorsum & (1<<pos);
        pos++;
    }


    int new_xorsum =0;
    for(int i=0; i<8; i++)
    {
        if((arr[i] & (1<<(pos-1))) != 0)
            new_xorsum ^= arr[i];
    }
    cout << new_xorsum << " ";


    new_xorsum =0;
    for(int i=0; i<8; i++)
    {
        if((arr[i] & (1<<(pos-1))) == 0)
            new_xorsum ^= arr[i];
    }
    cout << new_xorsum << endl;
}