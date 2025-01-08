//https://leetcode.com/problems/count-prefix-and-suffix-pairs-i/description
class Solution {
public:
    bool isPrefixAndSuffix(string str1, string str2){
        int m=str1.length();
        int n=str2.length();
        return str2.substr(0,m)==str1 && str2.substr(n-m)==str1;
    }
    int countPrefixSuffixPairs(vector<string>& words) {

        int n = words.size();
        int count = 0;
        for (int j = 1; j < n; j++) {
            for (int i = 0; i < j; i++) {
                if (isPrefixAndSuffix(words[i], words[j])) {
                    count++;
                }
            }
        }
        return count;
    }
};