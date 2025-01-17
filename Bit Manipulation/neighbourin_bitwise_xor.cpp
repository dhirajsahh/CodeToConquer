//https://leetcode.com/problems/neighboring-bitwise-xor/
class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        
        int n=derived.size();
        int xorResult=0;
        for(int i=0;i<n;i++){
            xorResult=(xorResult^derived[i]);
        }
        return xorResult==0;
    }
};