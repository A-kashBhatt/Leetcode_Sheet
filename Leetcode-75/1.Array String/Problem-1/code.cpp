// Time-Complexity  : O(n)
// Space-Complexity : O(1)

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string soln = "";
        int i = 0, j = 0, sz1 = word1.size(), sz2 = word2.size();
        while (i < sz1 && j < sz2)
        {
            soln += word1[i++];
            soln += word2[j++];
        }
        if (i < sz1)
        {
            string sub = word1.substr(i);
            soln += sub;
        }
        if (j < sz2)
        {
            string sub = word2.substr(j);
            soln += sub;
        }
        return soln;
    }
};