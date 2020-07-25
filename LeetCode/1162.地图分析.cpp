/*
 * @lc app=leetcode.cn id=1162 lang=cpp
 *
 * [1162] 地图分析
 */
#include <algorithm>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
 public:
  const int MAX_INF = 10000;
  int maxDistance(vector<vector<int>>& grid) {
    int dp[120][120];
    int ans = 0;
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[i].size(); j++) {
        if (grid[i][j]) {
          dp[i][j] = 0;
        } else {
          dp[i][j] = MAX_INF;
          if (i > 0) {
            dp[i][j] = min(dp[i][j], dp[i - 1][j] + 1);
          }
          if (j > 0) {
            dp[i][j] = min(dp[i][j], dp[i][j - 1] + 1);
          }
        }
      }
    }

    // for (int i = 0; i < grid.size(); i++) {
    //   for (int j = 0; j < grid[i].size(); j++) {
    //     cout << dp[i][j] << ",";
    //   }
    //   cout << endl;
    // }

    for (int i = grid.size() - 1; i >= 0; i--) {
      for (int j = grid[i].size() - 1; j >= 0; j--) {
        if (grid[i][j]) {
          dp[i][j] = 0;
        } else {
          if (i < grid.size() - 1) {
            dp[i][j] = min(dp[i][j], dp[i + 1][j] + 1);
          }
          if (j < grid[i].size() - 1) {
            dp[i][j] = min(dp[i][j], dp[i][j + 1] + 1);
          }
        }
        ans = max(ans, dp[i][j]);
      }
    }

    // for (int i = 0; i < grid.size(); i++) {
    //   for (int j = 0; j < grid[i].size(); j++) {
    //     cout << dp[i][j] << ",";
    //   }
    //   cout << endl;
    // }
    // cout << "ans:" << ans << endl;

    if (ans == MAX_INF || ans == 0) {
      return -1;
    }
    return ans;
  }
};
// @lc code=end
