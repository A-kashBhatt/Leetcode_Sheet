// Time Complexity : O(n)
// Space Complexity: O(1)

class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int cnt = 0, sz = flowerbed.size();
        for (int i = 0; i < sz; i++)
        {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == sz - 1 || flowerbed[i + 1] == 0))
            {
                i++;
                cnt++;
            }
        }
        return cnt >= n;
    }
};