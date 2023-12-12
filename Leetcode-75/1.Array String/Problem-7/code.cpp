// Time Complexity : O(n)
// Space Complexity:O(1)
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int sz = nums.size();
        vector<int> soln(sz, 1);
        for (int i = 1; i < sz; i++)
        {
            soln[i] = nums[i - 1] * soln[i - 1];
        }
        int value = 1;
        for (int i = sz - 1; i >= 0; i--)
        {
            soln[i] *= value;
            value *= nums[i];
        }
        return soln;
    }
};