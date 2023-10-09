/*
Runtime: 9ms
Memory: 10.9MB
*/

#include <bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
       
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(target - nums[i]) == mp.end())
                mp[nums[i]] = i;
            else
                return {mp[target - nums[i]], i};
        }
 
        return {-1, -1};
    }
};

/*
[2,5,7,9] and target = 9.

First we insert the first element of the array i.e. 2 into the map.
Now the map contain [2,0], where 2 is key and 0 is index.
Now we iterate the for loop from 1. So nums[i] i.e. nums[1]=5. To make the some 9 we need the element, 9-5 i.e. 4.
So we store in temp i.e. temp = target-nums[i] i.e. 4.
Now checking that is 4 present in the map. If present then push the index of it to the vector i.e. v.push_back(mp[temp]) and v.push_back(i). But the if condition does not satisfy here.
Else if the temp value not present in the map insert the current element with it index into the map i.e. the else statement is executed here. So after this the map will contain [[2,0], [5,1]].
For second ieration of the loop the element is 7 and to make sum 9 we need the element 9-7=2. Now searching that if two presented in the map and the ans is yes so if condition executed and pushing the index of element 2 to the vector and the inde of 7 also and return it.
*/
