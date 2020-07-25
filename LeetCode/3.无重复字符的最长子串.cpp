/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */
#include <string>
using namespace std;
// @lc code=start
class Solution {
 public:
  static const int MAX_N = 130;
  int word[MAX_N];
  int lengthOfLongestSubstring(string s) {
    for (int i = 0; i < MAX_N; i++) {
      word[i] = -1;
    }
    int ans = 0;
    int last = -1;
    for (int i = 0; i < s.size(); i++) {
      //   for (int j = 0; j < s.size(); j++) {
      //     cout << j << " " << s[j] << " " << word[s[j]] << endl;
      //   }
      int temp_last = last;

      int t = word[s[i]];
      if (t >= 0) {
        last = t;
      }
      //cout << i << " " << t << " " << temp_last << " " << last << endl;
      while (temp_last < last) {
        if (temp_last >= 0) {
          if (word[s[temp_last]] <= temp_last) {
            word[s[temp_last]] = -1;
          }
        }
        temp_last++;
      }
      word[s[i]] = i;

      ans = max(ans, i - last);
      // i = last;
      //cout << i << " " << word[s[i]] << " " << last << endl;
      // cout << ans << endl;
    }
    return ans;
  }
};
// @lc code=end
