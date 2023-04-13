#include<bits/stdc++.h>

using namespace std;

string decimaltohexadecimal(int num)
{
    int pow=1;
    string ans="";

    while(pow<=num)
        pow *= 16;

    pow /= 16;

    while(pow>0)
    {
        int lastdigit = num/pow;
        num -= lastdigit*pow;
        pow /= 16;
        
        if (lastdigit <= 9)
            ans = ans + to_string(lastdigit);

        else 
        {
            lastdigit = 'A' + lastdigit - 10;
            ans.push_back(char(lastdigit));
        }
                
    }
    return ans;
}


int main()
{
    int number;
    cin >> number;
    cout << decimaltohexadecimal(number);
}