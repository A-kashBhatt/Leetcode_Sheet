// Time Complexity:O(n)
// Space Complexity:O(n)

class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> m1, m2;
        for (auto it : nums1)
            m1[it]++;
        for (auto it : nums2)
            m2[it]++;
        vector<vector<int>> soln(2);
        for (auto it : m1)
        {
            if (!m2.count(it.first))
                soln[0].push_back(it.first);
        }
        for (auto it : m2)
        {
            if (!m1.count(it.first))
                soln[1].push_back(it.first);
        }
        return soln;
    }
};