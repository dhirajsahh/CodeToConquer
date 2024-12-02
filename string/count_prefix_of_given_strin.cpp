//https://leetcode.com/problems/count-prefixes-of-a-given-string/description/
class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int n = words.size();
        int count = 0;

        for (string &word : words) {
            int m = word.length();
            if (s.substr(0, m) == word) {
                count++;
            }
        }
        return count;
    }
};