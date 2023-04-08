#include<iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    int prime[n+1];

    for(int i=0; i<=n; i++)
        prime[i] = 0;

    for(int i=2; i<=n; i++)
    {
        if(prime[i] == 0)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                if(prime[j]==0)
                    prime[j] = i;

            }
            prime[i] = i;
        }
    }

    int k=n, i=0;

    while(k!= 1)
    {
        cout << prime[k] << " ";        
        k /= prime[k];
    }

}