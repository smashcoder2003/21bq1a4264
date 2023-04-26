class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> count;
        for (int element : nums)
        {
            if (count.count(element))
                return true;
            else
                count.insert(element);
        }
        return false;
    }
};