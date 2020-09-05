/*
 * @lc app=leetcode.cn id=201 lang=cpp
 *
 * [201] 数字范围按位与
 */

// @lc code=start
class Solution {
 public:
  int rangeBitwiseAnd(int m, int n) {
    int res = 0;
    while (m < n) {
      m = m >> 1;
      n = n >> 1;
      res++;
    }
    return m << res;
  }
};
// @lc code=end
