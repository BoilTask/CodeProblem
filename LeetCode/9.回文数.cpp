/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
 public:
  char s[10];
  bool isPalindrome(int x) {
    if (x < 0) {
      return false;
    } else if (x == 0) {
      return true;
    }
    int n = 0;
    while (x) {
      s[n++] = x % 10;
      x /= 10;
    }
    for (int i = 0; i < n / 2; i++) {
      if (s[i] != s[n - i - 1]) {
        return false;
      }
    }
    return true;
  }
};
// @lc code=end
