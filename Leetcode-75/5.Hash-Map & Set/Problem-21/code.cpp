// Time Complexity :O(n)
// Space Complexity:O(n)

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        unordered_map<int, int> m;
        int i = 0, sz = arr.size();
        while (i < sz)
        {
            int curr = arr[i], cnt = 0;
            while (i < sz && arr[i] == curr)
            {
                cnt++;
                i++;
            }
            m[cnt]++;
        }
        for (auto it : m)
        {
            if (it.second > 1)
                return false;
        }
        return true;
    }
};