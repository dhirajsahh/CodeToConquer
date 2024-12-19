//https://leetcode.com/problems/h-index/description/
class Solution {
public:
    bool isThere_H_cititedPapers(vector<int>&citations,int h){
        int count=0;
        for(int &paper:citations){
            if(paper>=h){
                count++;
            }
        }
        return count>=h;
    }
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int l=1;
        int r=n;
        int result=0;
        while(l<=r){
            int h=l+(r-l)/2;
            
            if(isThere_H_cititedPapers(citations,h)){
                result=h;
                l=h+1;
            }
            else {
                r=h-1;
            }
        }
        return result;
    }
};