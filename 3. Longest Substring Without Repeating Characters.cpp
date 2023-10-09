class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int n = s.length();
        
        unordered_map<int, int>m;
        int c = 0, maxlen = -1;
        
        for (int i = 0; i < n; i++) {
            if (m.find(s[i]) == m.end() || (i - m[s[i]] > c))
                c++;
            else {
                maxlen = max(maxlen, c);
                c = i-m[s[i]];
            }
            m[s[i]] = i;
        }
        
        return max(maxlen, c); 
    }
};
