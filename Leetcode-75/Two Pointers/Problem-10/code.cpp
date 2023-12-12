// Time  Complexity:O(n)
// Space Complexity:O(1)

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i = 0, j = 0, sz = nums.size();
        while (j < sz)
        {
            while (j < sz && nums[j] == 0)
                j++;
            if (j < sz)
            {
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
        }
    }
};