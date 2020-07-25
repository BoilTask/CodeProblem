/*
 * @lc app=leetcode.cn id=836 lang=cpp
 *
 * [836] 矩形重叠
 */

// @lc code=start
class Solution {
 public:
  class Point {
   public:
    Point() : x(0), y(0) {}
    Point(int x_v, int y_v) : x(x_v), y(y_v) {}
    bool is_point_left(Point& p) { return x <= p.x; }
    bool is_point_right(Point& p) { return x >= p.x; }
    bool is_point_top(Point& p) { return y >= p.y; }
    bool is_point_bottom(Point& p) { return y <= p.y; }
    int x, y;
  };
  class Rectangle {
   public:
    Rectangle(int lb_x, int lb_y, int rt_x, int rt_y)
        : left_bottom(lb_x, lb_y),
          right_top(rt_x, rt_y),
          left_top(lb_x, rt_y),
          right_bottom(rt_x, lb_y) {}
    static bool JudgeOverlap(Rectangle& rec1, Rectangle& rec2) {
      bool is_not_over_lap = rec1.is_left(rec2) || rec1.is_right(rec2) ||
                             rec1.is_top(rec2) || rec1.is_bottom(rec2);
      return !is_not_over_lap;
    }
    bool is_left(Rectangle& r) {
      return is_point_left(r.left_bottom) && is_point_left(r.left_top);
    }
    bool is_right(Rectangle& r) {
      return is_point_right(r.right_bottom) && is_point_right(r.right_top);
    }
    bool is_top(Rectangle& r) {
      return is_point_top(r.left_top) && is_point_top(r.right_top);
    }
    bool is_bottom(Rectangle& r) {
      return is_point_bottom(r.left_bottom) && is_point_bottom(r.right_bottom);
    }
    bool is_point_left(Point& p) {
      if (left_bottom.is_point_left(p) && right_top.is_point_left(p) &&
          left_top.is_point_left(p) && right_bottom.is_point_left(p)) {
        return true;
      }
      return false;
    }
    bool is_point_right(Point& p) {
      if (left_bottom.is_point_right(p) && right_top.is_point_right(p) &&
          left_top.is_point_right(p) && right_bottom.is_point_right(p)) {
        return true;
      }
      return false;
    }
    bool is_point_top(Point& p) {
      if (left_bottom.is_point_top(p) && right_top.is_point_top(p) &&
          left_top.is_point_top(p) && right_bottom.is_point_top(p)) {
        return true;
      }
      return false;
    }
    bool is_point_bottom(Point& p) {
      if (left_bottom.is_point_bottom(p) && right_top.is_point_bottom(p) &&
          left_top.is_point_bottom(p) && right_bottom.is_point_bottom(p)) {
        return true;
      }
      return false;
    }
    Point left_bottom;
    Point right_top;
    Point left_top;
    Point right_bottom;
  };
  bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
    Rectangle rect1(rec1[0], rec1[1], rec1[2], rec1[3]),
        rect2(rec2[0], rec2[1], rec2[2], rec2[3]);
    return Rectangle::JudgeOverlap(rect1, rect2);
  }
};
// @lc code=end
