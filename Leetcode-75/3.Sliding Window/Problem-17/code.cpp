class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int i = 0, j = 0, sz = nums.size(), cnt = 0, ans = 0;
        while (j < sz)
        {
            if (nums[j] == 0)
                cnt++;
            if (cnt <= 1)
                ans = max(ans, j - i + 1);

            while (j > i && cnt > 1)
            {
                if (nums[i] == 0)
                    cnt--;
                i++;
            }
            j++;
        }
        return ans - 1;
    }
};