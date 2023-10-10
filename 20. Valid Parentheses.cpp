/*
Runtime: 4ms
Memory: 6.4MB
*/
class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        
        for(int i=0;i<s.length();i++){
            char ch=str.empty()?'#':str.top();
            
            if(ch=='(' && s[i]==')')   str.pop();
            else if(ch=='[' && s[i]==']')   str.pop();
            else if(ch=='{' && s[i]=='}')   str.pop();
            else str.push(s[i]);
        }
        return str.empty();
    }
};
