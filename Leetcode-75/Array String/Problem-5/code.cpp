// Time Complexity:O(n)
// space Complexity:O(1)

class Solution
{
    int isVowel(char ch)
    {
        string str = "aeiouAEIOU";
        return (str.find(ch) != string::npos);
    }

public:
    string reverseVowels(string s)
    {
        int i = 0, sz = s.size(), j = sz - 1;
        while (j > i)
        {
            while ((i < s.size()) && (!isVowel(s[i])))
            {
                i++;
            }
            while ((j >= 0) && (!isVowel(s[j])))
            {
                j--;
            }
            if (j > i)
                swap(s[i], s[j]);
            i++;
            j--;
        }
        return s;
    }
};