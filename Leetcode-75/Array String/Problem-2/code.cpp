// Time-complexity:O(n2)
// Space-Complexity:O(n)

class Solution
{
    bool checkGcd(string str1, string str2, string sub)
    {
        string temp1 = sub, temp2 = sub;
        while (temp1.size() < str1.size())
        {
            temp1 += sub;
        }
        if (temp1 != str1)
            return false;
        while (temp2.size() < str2.size())
        {
            temp2 += sub;
        }
        return temp2 == str2;
    }

public:
    string gcdOfStrings(string str1, string str2)
    {
        int sz1 = str1.size(), sz2 = str2.size();
        int it = min(sz1, sz2);
        string soln = "";
        for (int i = 0; i < it; i++)
        {
            if ((sz1 % (i + 1)) || (sz2 % (i + 1)))
                continue;
            string sub1 = str1.substr(0, i + 1);
            string sub2 = str2.substr(0, i + 1);
            if (sub1 == sub2)
            {
                if (checkGcd(str1, str2, sub1))
                    soln = sub1;
            }
        }
        return soln;
    }
};

// Time-Complexity : O(n)
// Space-Complexity: O(1)

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        return (str1 + str2 == str2 + str1) ? str1.substr(0, gcd(size(str1), size(str2))) : "";
    }
};