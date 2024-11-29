//https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

class Solution {
public:
    bool allCharacterisPresentOnce(unordered_map<char, int>& freqMap) {
        for (auto& entry : freqMap) {
            if (entry.second > 1){
                return false;
            }
        }
        return true;
    }

    int lengthOfLongestSubstring(string s) {

        int n = s.length();
        int i = 0;
        int j = 0;
        int length = 0;
        unordered_map<char, int> mp;
        while (j < n) {
            mp[s[j]]++;
            while(!allCharacterisPresentOnce(mp)){
                mp[s[i]]--;
                
                i++;
            }
            length=max(length,j-i+1);
            j++;
        }
        return length;
    }
};