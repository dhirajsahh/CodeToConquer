//https://leetcode.com/problems/furthest-point-from-origin/description/
class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        
        int n=moves.size();
        // ekchoti replace with l  
        // ekchoti replace with r 

        int with_R=replace(moves,'R');
        int with_L=replace(moves,'L');

        return max(with_R,with_L);

    }
    int replace(string &moves,char x){
        int count=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L'){
                count--;
            }
            else if(moves[i]=='R'){
                count++;
            }
            else {
                if(x=='R') count++;
                else if(x=='L') count--;
            }
        }
        return abs(count);
    }
};