#include<iostream>

using namespace std;

int setBit(int n , int i)
{
    return (n | (1<<i));
}


int main()
{
    int arr[7] = {1, 1, 1, 2, 2, 2, 3};
    int result=0;
    for(int i=0; i<64; i++)
    {
        int count=0; 
        for(int j=0; j<7; j++)
        {
            if((arr[j] & (1<<i))!=0)
                count++;
        }

        if((count % 3)!= 0)
            result = setBit(result, i);
    }
    cout << result;
}