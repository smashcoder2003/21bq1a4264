#include <bits/stdc++.h>

class Solution {
public:
    std:: vector<int> twoSum(std:: vector<int>& nums, int target) {
        std:: unordered_map<int, int> my_map;
        
        for (int i = 0; i < nums.size(); ++i)
        {
            int diff = target - nums[i];

            if (my_map.count(diff))
                return {my_map[diff], i};
            
            my_map[nums[i]] = i;
        }
        return {};
    }
};

int main()
{
    Solution x;
    std:: vector<int> nums = {1, 2, 3, 4, 5, 7};
    for (int num: x.twoSum(nums, 6))
        std::cout << num << " ";

}