class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int k = 0;
        int i = 0;
        for (int i = 0; i < haystack.length(); ++i)
        {
            if (haystack[i] == needle[k])
                ++k;

            else
            {
                i -= k;
                k = 0;
            }
            if (k == needle.length())
                return i - k + 1;
        }
        return -1;
    }
};