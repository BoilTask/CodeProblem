/*
 * @lc app=leetcode.cn id=999 lang=cpp
 *
 * [999] 车的可用捕获量
 */

// @lc code=start
class Solution {
 public:
  int numRookCaptures(vector<vector<char>>& board) {
    int find_i, find_j;
    for (int i = 0; i < board.size(); i++) {
      for (int j = 0; j < board[i].size(); j++) {
        if (board[i][j] == 'R') {
          find_i = i;
          find_j = j;
        }
      }
    }
    int ans = 0;
    int ti = find_i;
    int tj = find_j;
    while (ti < board.size()) {
      if (board[ti][tj] == 'B') {
        break;
      }
      if (board[ti][tj] == 'p') {
        ans++;
        break;
      }
      ti++;
    }

    ti = find_i;
    tj = find_j;
    while (ti >= 0) {
      if (board[ti][tj] == 'B') {
        break;
      }
      if (board[ti][tj] == 'p') {
        ans++;
        break;
      }
      ti--;
    }

    ti = find_i;
    tj = find_j;
    while (tj < board[ti].size()) {
      if (board[ti][tj] == 'B') {
        break;
      }
      if (board[ti][tj] == 'p') {
        ans++;
        break;
      }
      tj++;
    }

    ti = find_i;
    tj = find_j;
    while (tj >= 0) {
      if (board[ti][tj] == 'B') {
        break;
      }
      if (board[ti][tj] == 'p') {
        ans++;
        break;
      }
      tj--;
    }

    return ans;
  }
};
// @lc code=end
