/*
 * @lc app=leetcode.cn id=219 lang=cpp
 *
 * [219] 存在重复元素 II
 */
#include <unordered_map>
using namespace std;
// @lc code=start
class Solution {
 public:
  bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, bool> q;
    k++;
    if (k > nums.size()) {
      k = nums.size();
    }
    for (int i = 0; i < k; i++) {
    //   cout << "-----map_out-----" << endl;
    //   for (auto item : q) {
    //     cout << item.first << "," << item.second << endl;
    //   }
    //   cout << "-----map_end-----" << endl;
      if (q[nums[i]]) {
        return true;
      } else {
        q[nums[i]] = true;
      }
    }
    for (int i = k; i < nums.size(); i++) {
    //   cout << "-----map_out1-----" << endl;
    //   for (auto item : q) {
    //     cout << item.first << "," << item.second << endl;
    //   }
    //   cout << "-----map_end-----" << endl;
      q[nums[i - k]] = false;
    //   cout << "-----map_out2-----" << endl;
    //   for (auto item : q) {
    //     cout << item.first << "," << item.second << endl;
    //   }
    //   cout << "-----map_end-----" << endl;
      if (q[nums[i]]) {
        return true;
      } else {
        q[nums[i]] = true;
      }
    }
    return false;
  }
};
// @lc code=end
