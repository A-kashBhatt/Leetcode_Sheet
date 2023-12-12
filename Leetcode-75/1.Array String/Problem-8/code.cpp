class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        int first = INT_MAX, second = INT_MAX, sz = nums.size();
        for (int i = 0; i < sz; i++)
        {
            if (first >= nums[i])
                first = nums[i];
            else if (second >= nums[i])
                second = nums[i];
            else
                return true;
        }
        return false;
    }
};