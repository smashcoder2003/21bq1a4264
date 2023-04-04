#include<iostream>

using namespace std;

int noOfOnes(int number)
{
    int count=0;
    while(number)
    {
        number = (number & (number-1));
        count++;
    }
    return count;
}

int main()
{
    int number;
    cin >> number;
    cout << noOfOnes(number);
}