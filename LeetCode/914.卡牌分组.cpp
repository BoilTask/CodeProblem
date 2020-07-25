/*
 * @lc app=leetcode.cn id=914 lang=cpp
 *
 * [914] 卡牌分组
 */

// @lc code=start
class Solution {
 public:
  int gcd(int a, int b) { return !b ? a : gcd(b, a % b); }
  bool hasGroupsSizeX(vector<int>& deck) {
    sort(deck.begin(), deck.end());
    int ans = 0, cnt = 1;
    for (int i = 1; i < deck.size(); i++) {
      if (deck[i] == deck[i - 1]) {
        cnt++;
      } else {
        if (cnt < 2) {
          return false;
        }
        int t = gcd(ans, cnt);
        if (t > 1) {
          ans = t;
        }
        if (ans == cnt || (cnt / ans > 0 && cnt % ans == 0)) {
          ans = cnt;
          cnt = 1;
        } else {
          if (ans / cnt > 0 && ans % cnt == 0) {
            ans = cnt;
            cnt = 1;
          } else {
            return false;
          }
        }
      }
    }
    if (cnt < 2) {
      return false;
    }
    int t = gcd(ans, cnt);
    if (t > 1) {
      ans = t;
    }
    return (ans == 0 && cnt > 1) || ans == cnt ||
           (ans != 0 && cnt / ans > 0 && cnt % ans == 0) ||
           (ans / cnt > 0 && ans % cnt == 0);
  }
};
// @lc code=end
