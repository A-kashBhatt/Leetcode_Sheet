// Time Complexity  : O(n)
// Space Complexity : O(1)

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int i = 0, sz = height.size(), j = sz - 1, ans = 0;
        while (j > i)
        {
            ans = max(min(height[i], height[j]) * (j - i), ans);
            height[i] > height[j] ? j-- : i++;
        }
        return ans;
    }
};