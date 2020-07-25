/*
 * @lc app=leetcode.cn id=820 lang=cpp
 *
 * [820] 单词的压缩编码
 */
#include <unordered_set>
using namespace std;
// @lc code=start
class Solution {
 public:
  int minimumLengthEncoding(vector<string>& words) {
    unordered_set<string> q(words.begin(), words.end());
    for (int i = 0; i < words.size(); i++) {
      for (int j = 1; j < words[i].size(); j++) {
        q.erase(words[i].substr(j));
      }
    }

    int ans = 0;
    for (auto& word : q) {
      ans += word.size() + 1;
    }

    return ans;
  }
};
// @lc code=end
