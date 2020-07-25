/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */
#include <string>
using namespace std;
// @lc code=start
class Solution {
 public:
  int strStr(string haystack, string needle) {
    int t = haystack.find(needle);
    return t;
  }
};
// @lc code=end
