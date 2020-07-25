/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
 public:
  struct Node {
    int num;
    int idx;
  };
  vector<Node> find_nums;
  int findNum(int num, bool is_low) {
    // cout << num << endl;
    int l = 0, r = find_nums.size();
    while (l < r) {
      int mid = (l + r) / 2;
    //   cout << l << "," << r << "," << mid << "," << find_nums[mid].num << ","
    //        << find_nums[mid].idx << endl;
      if (find_nums[mid].num == num) {
        if (is_low) {
          r = mid;
        } else {
          l = mid + 1;
        }
      } else if (find_nums[mid].num < num) {
        l = mid + 1;
      } else {
        r = mid;
      }
    }
    if (is_low) {
      return l;
    } else {
      return l - 1;
    }
  }
  vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> res;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
      Node temp;
      temp.idx = i;
      temp.num = nums[i];
      find_nums.push_back(temp);
    }
    sort(find_nums.begin(), find_nums.end(),
         [](Node &A, Node &B) { return A.num < B.num; });

    // for (int i = 0; i < n; i++) {
    //   cout << find_nums[i].idx << "," << find_nums[i].num << endl;
    // }

    for (int i = 0; i < n; i++) {
      int t1 = findNum(target - nums[i], true);
      //cout << "find:" << t1 << endl;
      if (t1 < n && nums[i] + nums[find_nums[t1].idx] == target) {
        if (i == find_nums[t1].idx) {
          int t2 = findNum(target - nums[i], false);
          //cout << "find:" << t2 << endl;
          if (i == find_nums[t2].idx) {
            continue;
          }
          if (nums[i] + nums[find_nums[t2].idx] == target) {
            res.push_back(i);
            res.push_back(find_nums[t2].idx);
            break;
          }
        } else {
          res.push_back(i);
          res.push_back(find_nums[t1].idx);
          break;
        }
      }
    }
    return res;
  }
};
// @lc code=end
