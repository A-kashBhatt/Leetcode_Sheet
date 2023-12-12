// Time Complexity : O(n)
// Space Complexity: O(1)

class Solution
{
    bool isVowel(char c)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            return true;
        }
        return false;
    }

public:
    int maxVowels(string s, int k)
    {
        int ans = 0, sz = s.size(), cnt = 0, i = 0;
        for (int j = 0; j < sz; j++)
        {
            if (isVowel(s[j]))
                cnt++;
            if (j - i + 1 == k)
            {
                ans = max(ans, cnt);
                if (isVowel(s[i]))
                    cnt--;
                i++;
            }
        }
        return ans;
    }
};