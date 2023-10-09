/*
Runtime: 20ms
Memory: 7.1MB
*/

class Solution {
public:
  string longestPalindrome(string s) {
    const int n = s.length();
    auto gen = [&](int l, int r) {
      while (l >= 0 && r < n 
             && s[l] == s[r]) {
        --l;
        ++r;
      }
      return r - l - 1;
    };
    int len = 0;
    int start = 0;
    for (int i = 0; i < n; ++i) {
      int m = max(gen(i, i), 
                    gen(i, i + 1));
      if (m > len) {
        len = m;
        start = i - (len - 1) / 2;
      }
    }
    return s.substr(start, len);
  }
};
