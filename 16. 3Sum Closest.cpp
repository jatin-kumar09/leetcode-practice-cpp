/*
Runtime: 633ms
Memory: 16.3MB
*/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int err=INT_MAX;
        int n=nums.size();
        int soln=0;
        if(n<3)   return 0;
        for(int i=0;i<n-2;i++){
            int begin=i+1,end=n-1;
            while(begin<end){
                if(abs(nums[i]+nums[begin]+nums[end]-target)<err){
                    err=abs(nums[i]+nums[begin]+nums[end]-target);
                    soln= nums[i]+nums[begin]+nums[end];
                }
                if(nums[i]+nums[begin]+nums[end] > target)  end--;
                else    begin++;
            }
        }
        return soln;
    }
};
