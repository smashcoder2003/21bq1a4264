#include<iostream>

using namespace std;

int countMazePaths(int n, int m)
{
    if(n==1 || m==1)
        return 1;

    else
        return countMazePaths(n-1, m) + countMazePaths(n, m-1);
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << countMazePaths(n, m);
}