// https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/description/
class Solution
{
public:
    int isPrefixOfWord(string sentence, string searchWord)
    {

        int m = searchWord.length();
        int i = 1;
        stringstream ss(sentence);
        string t;
        char del = ' ';
        while (getline(ss, t, del))
        {
            if (t.substr(0, m) == searchWord)
            {
                return i;
            }
            i++;
        }
        return -1;
    }
};