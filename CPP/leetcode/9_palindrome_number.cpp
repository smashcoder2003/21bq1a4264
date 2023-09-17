#include <iostream>

class Solution
{
public:
    bool isPalindrome(int x)
    {
        int rev = 0;
        while (x > rev)
        {
            rev = (rev * 10) + x % 10;
            x /= 10;
        }
        return (x == rev || x == rev / 10);
    }
};

int main()
{
    Solution x;
    std::cout << x.isPalindrome(12121);
}