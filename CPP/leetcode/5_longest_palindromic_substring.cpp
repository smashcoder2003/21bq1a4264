#include <string>
#include <iostream>

using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
        string substr = "";
        for (int i = 0; i < s.length(); ++i)
        {
            int left = i;
            int right = i;

            while (left >= 0 && right < s.length() && s[left] == s[right])
            {
                left--;
                right++;
            }
            left++;
            right--;
            string new_string = s.substr(left, right - left + 1);
            substr = new_string.length() > substr.length() ? new_string : substr;

            left = i;
            right = i + 1;

            while (left >= 0 && right < s.length() && s[left] == s[right])
            {
                left--;
                right++;
            }
            left++;
            right--;
            new_string = s.substr(left, right - left + 1);
            substr = new_string.length() > substr.length() ? new_string : substr;
        }

        return substr;
    }
};

int main()
{
    Solution obj1;
    std::cout << obj1.longestPalindrome("abacaba");
}