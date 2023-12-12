// Time Complexity : O(n)
// Space Complexity: O(1)

class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int i = 0, j = 0, sz = nums.size(), cnt = 0, ans = 0;
        while (j < sz)
        {
            if (nums[j] == 1)
                j++;
            else
            {
                cnt++;
                j++;
            }
            if (cnt > k)
            {
                while (j > i && cnt > k)
                {
                    if (nums[i] == 0)
                        cnt--;
                    i++;
                }
            }
            ans = max(ans, j - i);
        }
        return ans;
    }
};