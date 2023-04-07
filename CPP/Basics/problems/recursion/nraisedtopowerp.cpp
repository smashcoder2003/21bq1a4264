#include<iostream>

int nrp(int n, int p)
{
    if(p == 0)
        return 1;
    else
    {
        return n * nrp(n, p-1);
    }
}

int main()
{
    int n, p;
    std::cin >> n >> p;
    
    std::cout << nrp(n,p);
}