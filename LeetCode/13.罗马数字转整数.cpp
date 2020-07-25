/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution {
 public:
  int getNum(char c) {
    switch (c) {
      case 'I':
        return 1;
      case 'V':
        return 5;
      case 'X':
        return 10;
      case 'L':
        return 50;
      case 'C':
        return 100;
      case 'D':
        return 500;
      case 'M':
        return 1000;
    }
    return 0;
  }
  int romanToInt(string s) {
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
      bool specil = false;
      if (i + 1 < s.size()) {
        if ((s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X')) ||
            (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')) ||
            (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'))) {
          specil = true;
        }
      }
      if (specil) {
        ans += getNum(s[i + 1]) - getNum(s[i]);
        i++;
      } else {
        ans += getNum(s[i]);
      }
    }
    return ans;
  }
};
// @lc code=end
