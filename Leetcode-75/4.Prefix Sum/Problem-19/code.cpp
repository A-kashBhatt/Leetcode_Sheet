// Time Complexity  :O(n)
// Space Complexity :O(1)

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int sum = accumulate(nums.begin(), nums.end(), 0), left = 0, sz = nums.size();
        for (int i = 0; i < sz; i++)
        {
            if (left == sum - nums[i] - left)
                return i;
            left += nums[i];
        }
        return -1;
    }
};