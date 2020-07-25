/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
 public:
  vector<int> plusOne(vector<int>& digits) {
    digits[digits.size() - 1]++;
    for (int i = digits.size() - 1; i >= 0; i--) {
      if (digits[i] >= 10) {
        if (i - 1 >= 0) {
          digits[i - 1] += digits[i] / 10;
          digits[i] = digits[i] % 10;
        } else {
          digits[i] = digits[i] % 10;
          digits.insert(digits.begin(), 1);
          break;
        }
      } else {
        break;
      }
    }
    return digits;
  }
};
// @lc code=end
