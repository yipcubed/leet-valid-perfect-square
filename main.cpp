#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <unordered_set>

#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
  bool isPerfectSquare(int num) {
    if (num == 1) return 1;
    int lo = 2;
    int hi = num / 2;
    while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      int div = num / mid;
      if (div == mid) {
        return mid * mid == num;
      }
      if (div > mid) {
        lo = mid + 1;
      } else {
        hi = mid - 1;
      }
    }
    return false;
  }
};

void test1() {
    cout << "0 ? " << Solution().isPerfectSquare(2147483647) << endl;
    cout << "1 ? " << Solution().isPerfectSquare(16) << endl;
    cout << "0 ? " << Solution().isPerfectSquare(14) << endl;
}

void test2() {

}

void test3() {

}