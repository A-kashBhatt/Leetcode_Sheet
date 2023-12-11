class Solution
{
public:
    string reverseWords(string s)
    {
        int i = s.size() - 1;
        string soln;
        while (i >= 0)
        {
            while ((i >= 0) && (s[i] == ' '))
                i--;
            string word = "";
            while ((i >= 0) && (s[i] != ' '))
                word += s[i--];
            reverse(word.begin(), word.end());
            soln += word;
            if (word != "")
                soln += ' ';
        }
        return soln[soln.size() - 1] == ' ' ? soln.substr(0, soln.size() - 1) : soln;
    }
};