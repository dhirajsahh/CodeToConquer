//https://leetcode.com/problems/minimum-penalty-for-a-shop/description/
class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        int prefixOfN = 0;
        int suffixOfY = 0;
        pair<int, int> p;
        p.second = INT_MAX;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (customers[i] == 'Y') {
                suffixOfY++;
            }
        }
        for (int i = 0; i < n; i++) {
            count = prefixOfN + suffixOfY;
            if (count < p.second) {
                p.first = i;
                p.second = count;
            }
            if (customers[i] == 'N') {
                prefixOfN++;
            }
            if (customers[i] == 'Y') {
                suffixOfY--;
            }
        }
        // closing at the end of 4th hour
        count = prefixOfN + suffixOfY;
        if (count < p.second) {
            p.first = n;
            p.second = count;
        }
        return p.first;
    }
};