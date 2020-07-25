/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
 public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* l3 = new ListNode(0);
    ListNode* temp = l3;

    while (l1 || l2) {
      int t = 0;
      if (l1) {
        t += l1->val;
        l1 = l1->next;
      }
      if (l2) {
        t += l2->val;
        l2 = l2->next;
      }
      t += temp->val;
      temp->val = t % 10;
      if (l1 || l2 || t / 10 > 0) {
        ListNode* next_temp = new ListNode(t / 10);
        temp->next = next_temp;
        temp = next_temp;
      }
    }

    return l3;
  }
};
// @lc code=end
