/*
Runtime: 8ms
Memory: 5.9MB
*/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int left=1;
        while(x/left>=10)   left=left*10;
        int right=1;
        while(left>right){
            if((x/left)%10!=(x/right)%10)   return false;
            left=left/10;
            right*=10;
        }
        return true;
    }
};
