// https://leetcode.com/problems/type-of-triangle/description/

class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a=nums[0];
        int b=nums[1];
        int c=nums[2];

        int a_Sum_b=a+b;
        int b_Sum_c=b+c;
        int c_Sum_a=c+a;
        if(a_Sum_b<=c) return "none";
        if(b_Sum_c<=a)  return "none";
        if(c_Sum_a<=b) return "none";
        if((a==b)&&(b==c)) return "equilateral";
        if(a==b||b==c||c==a) return "isosceles";
        return "scalene";

    }
};