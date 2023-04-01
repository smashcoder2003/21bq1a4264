#include<iostream>

using namespace std;

int factorial(int num)
{
    int result = 1;

    for(int i=num;i>=1;i--)
    {
        result *= i;
    }

    return result;
}

int ncr(int n, int r)
{
    return factorial(n)/(factorial(n-r)*factorial(r));
}

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {

        for(int j=0;j<=i;j++)
        {
            cout<<ncr(i,j)<<" ";
        } 
        cout<<endl;
    }
}