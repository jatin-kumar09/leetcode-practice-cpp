/*
Runtime: 13ms
Memory: 7.2MB
*/
#include <sstream>
#include <iostream>
class Solution {
public:
    int myAtoi(string s) {
        stringstream geek(s);
        int x=0;
        geek>>x;
        return x;
    }
};
