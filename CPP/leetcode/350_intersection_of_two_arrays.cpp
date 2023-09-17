class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> nums3;
        int i = nums1.size() - 1;
        int j = nums2.size() - 1;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        while (i >= 0 && j >= 0)
        {
            if (nums1[i] < nums2[j])
                j--;
            else if (nums1[i] > nums2[j])
                i--;
            else
            {
                nums3.push_back(nums1[i]);
                i--;
                j--;
            }
        }
        return nums3;
    }
};