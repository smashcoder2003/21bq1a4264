#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number, sum = 0;
    cin >> number;
    int original = number;

    while (number != 0)
    {
        int lastdigit = number % 10;
        sum += pow(lastdigit, 3);
        number = number / 10;
    }

    if (sum == float(original))
    {
        cout << "armstrongnumber";
    }
    
    else
    {
        cout << "not an armstrong number";
    }
}