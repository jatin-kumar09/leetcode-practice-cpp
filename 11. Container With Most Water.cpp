/*
Runtime: 84ms
Memory: 59.50MB
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size()<2) return 0;

        int maxn=INT_MIN,left=0;
        int right=height.size()-1;
        while(left<right){
            maxn=max(maxn,(right-left)*min(height[left],height[right]));

            if(height[left]<height[right])  left++;
            else right--;
        }

        return maxn;
    }
};
