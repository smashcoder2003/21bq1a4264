class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int k = 0;
        int max_length = 0;
        unordered_map<char, int> my_map;

        for (int i = 0; i < s.length(); ++i)
        {
            my_map[s[i]]++;
            while (my_map[s[i]] > 1) {
                my_map[s[k]]--;
                ++k;
            }
            max_length = max(max_length, i - k + 1);
        }
        return max_length;
    }
};