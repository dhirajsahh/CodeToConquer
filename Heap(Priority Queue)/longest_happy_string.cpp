//https://leetcode.com/problems/longest-happy-string/description/
class Solution {
public:
    bool canCharacter_be_added(string& result, char ch) {
        int n = result.length();
        if (n > 1 && result[n - 1] == ch && result[n - 2] == ch) {
            return false;
        }
        return true;
    }
    string longestDiverseString(int a, int b, int c) {

        string result = "";
        priority_queue<pair<int, char>> pq;
        if (a > 0) {
            pq.push({ a,'a'});
        }

        if (b > 0)
            pq.push({b,'b'});
        if (c > 0)
            pq.push({c,'c'});
        while (!pq.empty()) {
            pair<int , char> p = pq.top();
            pq.pop();
            int freq = p.first;
            char ch = p.second;
            if (canCharacter_be_added(result, ch)) {
                result += ch;
                freq--;
            } else {
                // second pair
                if(pq.empty()) break;
                pair<int, char> secondPair = pq.top();
                pq.pop();
                result += secondPair.second;
                secondPair.first--;
                if (secondPair.first != 0) {
                    pq.push({secondPair.first, secondPair.second});
                }

            }
            if (freq != 0) {
                pq.push({freq, ch});
            }
        }
        return result;
    }
};