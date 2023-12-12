// Time  complexity:O(n)
// Space complexity:O(1)

class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int i = 0, j = 0, sz = chars.size();
        while (j < sz)
        {
            char curr = chars[j];
            chars[i++] = curr;
            int cnt = 0;
            while (j < sz && chars[j] == curr)
            {
                cnt++;
                j++;
            }
            if (cnt == 1)
                continue;
            else
            {
                string freq = "";
                while (cnt)
                {
                    freq += ('0' + cnt % 10);
                    cnt /= 10;
                }
                for (int k = freq.size() - 1; k >= 0; k--)
                {
                    chars[i++] = freq[k];
                }
            }
        }
        return i;
    }
};