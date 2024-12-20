//https://leetcode.com/problems/robot-return-to-origin/
class Solution {
public:
    bool judgeCircle(string moves) {

        int n = moves.size();
        int left_right_direction = 0;  //x
        int up_down_direction=0;       //y
        for (int i = 0; i < n; i++) {
            if (moves[i] == 'U') {
                up_down_direction += 1;
            } else if (moves[i] == 'D') {
                up_down_direction -= 1;
            } else if (moves[i] == 'L') {
                left_right_direction -= 1;
            } else {
                left_right_direction += 1;
            }
        }
        return left_right_direction == 0 && up_down_direction==0;
    }
};