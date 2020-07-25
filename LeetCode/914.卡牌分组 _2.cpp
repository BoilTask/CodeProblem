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
    vector<int> count;
    int cnt = 1;
    for (int i = 1; i < deck.size(); i++) {
      if (deck[i] == deck[i - 1]) {
        cnt++;
      } else {
        count.push_back(cnt);
        cnt = 1;
      }
    }
    count.push_back(cnt);
    int ans = 0;
    for (int i = 0; i < count.size(); i++) {
      ans = gcd(ans, count[i]);
    }
    return ans > 2;
  }
};
// @lc code=end
