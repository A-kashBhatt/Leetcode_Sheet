// Time Complexity : O(n)
// Space Complexity: O(1)

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int mx = *max_element(candies.begin(), candies.end());
        vector<bool> soln;
        for (auto it : candies)
        {
            it + extraCandies >= mx ? soln.push_back(true) : soln.push_back(false);
        }
        return soln;
    }
};