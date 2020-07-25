/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
 public:
  string longestCommonPrefix(vector<string> &strs) {
    if (strs.size() == 0) {
      return "";
    }
    string ans = "";
    int idx = 0;
    bool while_find = true;
    while (while_find) {
      if (idx >= strs[0].size()) {
        break;
      }
      for (int i = 1; i < strs.size(); i++) {
        if (idx >= strs[i].size() || strs[i][idx] != strs[0][idx]) {
          while_find = false;
          break;
        }
      }
      if (while_find) {
        ans += strs[0][idx++];
      }
    }
    return ans;
  }
};
// @lc code=end
