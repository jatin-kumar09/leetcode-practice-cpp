/*
Runtime: 12ms
Memory: 8.3MB
*/

class Solution {
public:
    string convert(string s, int numRows) {
        string helper[numRows];
        for(int i=0;i<numRows;i++)    helper[i]="";
        int row=0;
        int delta=1;
        for(int i=0;i<s.length();i++){
            char c=s.at(i);
            helper[row]+=c;
            if(row==numRows-1)    delta=-1;
            else if(row==0) delta=1;
            row=row+delta;
            row=max(0,row);
        }
        string result="";
        for(int i=0;i<numRows && s.length()>0; i++)   result+=helper[i];
        return result;
    }
};
