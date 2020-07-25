/*
 * @lc app=leetcode.cn id=410 lang=cpp
 *
 * [410] 分割数组的最大值
 */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start

typedef long long LL;

class Solution {
 public:
  int splitArray(vector<int>& nums, int m) {
    // InitSum(nums);
    int nums_size = nums.size();

    num_sum[0] = nums[0];
    for (int i = 1; i < nums_size; i++) {
      num_sum[i] = num_sum[i - 1] + nums[i];
    }

    for (int i = 0; i <= nums_size; i++) {
      for (int j = 0; j <= m; j++) {
        dp[i][j] = INF;
      }
    }
    dp[0][0] = 0;
    for (int i = 1; i <= nums_size; i++) {
      for (int j = 1; j <= m; j++) {
        // if (i < j) {
        //   continue;
        // }
        // dp[i][j] = min(dp[i][j], GetSum(0, i));
        for (int k = 0; k < i; k++) {
          //   cout << dp[i][j] << "," << dp[k][j - 1] << "," << GetSum(k, i)
          //        << endl;
          dp[i][j] = min(dp[i][j], max(dp[k][j - 1], GetSum(k, i - 1)));
          //   cout << i << "," << j << "," << k << "," << dp[i][j] << endl;
        }
        // cout << i << "," << j << "," << dp[i][j] << endl;
      }
    }

    // cout << dp[nums_size - 1][m] << endl;
    return (int)dp[nums_size][m];
  }

 private:
  //   void InitSum(vector<LL>& nums) {
  //     int nums_size = nums.size();
  //     num_sum[0] = nums[0];
  //     for (int i = 1; i < nums_size; i++) {
  //       num_sum[i] = num_sum[i - 1] + nums[i];
  //     }
  //   }
  LL GetSum(int i, int j) {
    return !i ? num_sum[j] : num_sum[j] - num_sum[i - 1];
  }

 private:
  const LL INF = 0x3F3F3F3F3F3F3F3F;
  LL num_sum[1020];
  LL dp[1020][52];
};

// @lc code=end
