// https://leetcode.com/problems/determine-if-string-halves-are-alike/description/

class Solution
{
public:
    bool isVowel(char ch)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            return true;
        }
        return false;
    }
    bool halvesAreAlike(string s)
    {
        int n = s.length();
        int n1 = n / 2;
        int count1 = 0;
        int count2 = 0;
        for (int i = 0; i < n1; i++)
        {
            if (isVowel(s[i]))
            {
                count1++;
            }
        }
        for (int i = n1; i < n; i++)
        {
            if (isVowel(s[i]))
            {
                count2++;
            }
        }
        return count1 == count2;
    }
};