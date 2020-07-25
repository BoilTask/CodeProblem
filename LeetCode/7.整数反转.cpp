/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution {
 public:
  int reverse(int x) {
    long long ans = 0;
    while (x) {
      ans = ans * 10 + x % 10;
      x = x / 10;
    }
    if (ans <= INT_MAX && ans >= INT_MIN) {
      return (int)ans;
    } else {
      return 0;
    }
  }
};
// @lc code=end
