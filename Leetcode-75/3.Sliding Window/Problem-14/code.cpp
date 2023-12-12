// Time complexity :O(n)
// Space complexity:O(1)

class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int sum = accumulate(nums.begin(), nums.begin() + k, 0);
        int i = 0, j = k, sz = nums.size();
        int ans = sum;
        while (j < sz)
        {
            sum += nums[j++];
            sum -= nums[i++];
            ans = max(ans, sum);
        }
        return (1.0 * ans / k);
    }
};