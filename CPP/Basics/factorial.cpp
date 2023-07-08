#include <iostream>

using namespace std;
int factorial(int num)
{
    int result = 1;
    for (int i = num; i >= 1; i--)
    {
        result *= i;
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
}