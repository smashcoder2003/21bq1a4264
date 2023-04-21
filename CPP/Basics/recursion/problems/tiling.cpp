#include<iostream>

using namespace std;

int tiling(int n)
{
    if (n <= 2)
        return n;
        
    else
    {
        return tiling(n-1) + tiling(n-2);
    }

}

int main()
{
    int n;
    cin >> n;
    cout << tiling(n);
}