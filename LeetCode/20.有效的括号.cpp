/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
 public:
  bool is_left(char c) {
    if (c == '(' || c == '{' || c == '[') {
      return true;
    } else {
      return false;
    }
  }
  bool is_match(char a, char b) {
    if (a == '(' && b == ')' || a == '{' && b == '}' || a == '[' && b == ']') {
      return true;
    }
    return false;
  }
  bool isValid(string s) {
    stack<char> q;
    for (int i = 0; i < s.size(); i++) {
      if (is_left(s[i])) {
        q.push(s[i]);
      } else {
        if (q.empty()) {
          return false;
        }
        if (is_match(q.top(), s[i])) {
          q.pop();
        } else {
          return false;
        }
      }
    }
    return q.size() == 0;
  }
};
// @lc code=end
