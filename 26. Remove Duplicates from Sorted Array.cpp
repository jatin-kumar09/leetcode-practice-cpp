/*
Runtime: 7ms
Memory: 18.5MB
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<=1)    return n;
        int i=0;
        for(int j=1;j<n;j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};

/*********************************************************************************************************************************************/
/*********************************************************************************************************************************************/

/*
Runtime: 23ms
Memory: 19.3MB
*/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        int i=0;
        for(auto x:nums)    s.insert(x);
        for(auto it:s)  nums[i++] = it;
        
        return s.size();
    }
};
