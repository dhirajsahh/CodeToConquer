//https://leetcode.com/problems/check-if-the-sentence-is-pangram/description/

class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.length();
        if(n<25) return false;
        vector<int>freqArr(26,0);
        for(int i=0;i<n;i++){
           freqArr[sentence[i]-'a']++;
        }
        for(int &freq:freqArr){
            if(freq<1) return false;
        }
        return true;
    }
};