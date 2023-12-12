// Time Complexity : O(nlogn)
// Space Complexity: O(1)+O(logn)--->for sorting purpose

class Solution
{
public:
    int maxOperations(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int i = 0, sz = nums.size(), j = sz - 1, ans = 0;
        while (j > i)
        {
            if (nums[i] + nums[j] == k)
            {
                i++;
                j--;
                ans++;
            }
            else if (nums[i] + nums[j] > k)
                j--;
            else
                i++;
        }
        return ans;
    }
};