//https://leetcode.com/problems/find-the-k-beauty-of-a-number/description/

//Approach-1 
class Solution {
public:
    int divisorSubstrings(int num, int k) {

        int count = 0;
        string s = to_string(num);
        int n=s.length();
        int i = 0;
        int j = 0;
        string div = "";
        while (j < n) {
            div += s[j];
            while (j - i + 1 > k) {
                div.erase(0,1);
                i++;
            }
            if (j - i + 1 == k) {
                if ((stoi(div)!=0) && (num % (stoi(div)) )== 0) {
                    count++;
                }
            }
            j++;
        }
        return count;
    }
};