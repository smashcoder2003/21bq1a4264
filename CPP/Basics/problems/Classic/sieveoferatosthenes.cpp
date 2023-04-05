#include<iostream>

using namespace std;

int main()
{
    int  n = 10000;
    bool prime[n+1];

    for(int i=2; i<=n; i++)
    {
        if(!(prime[i]))
        {
            for(long int j=i*i; j<=n; j+=i)
                prime[j] = 1;
        }
    }

    for(int i=2;i<=n; i++)
    {
        if(!(prime[i]))
            cout << i << " ";
    }
}