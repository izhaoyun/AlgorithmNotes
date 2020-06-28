class Solution {
public:
  int climbStairs(int n) {
    int result = 0;
    int accu[3] = {0, 1, 2};
    if (n > 2) {
      for (int i = 3; i != n + 1; ++i) {
        accu[i % 3] = accu[(i - 1) % 3] + accu[(i - 2) % 3];
      }
    }
    result = accu[n % 3];
    return result;
  }
};
