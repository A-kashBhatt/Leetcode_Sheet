// Time  Complexity : O(n)
// Space Complexity : O(1)

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int sz1 = s.size(), sz2 = t.size();
        if (sz1 > sz2)
            return false;
        if (sz1 == 0)
            return true;
        int i = 0, j = 0;
        while (j < sz2)
        {
            if (s[i] == t[j])
            {
                i++;
                j++;
                if (i == sz1)
                    return true;
            }
            else
                j++;
        }
        return false;
    }
};