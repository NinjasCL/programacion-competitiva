// g++ solution.cpp -o solution
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int total, questions, height, needle, count, i;
    vector<int> heights;

    cin >> total >> questions;

    for (i = 0; i <= total - 1; i++){
        cin >> height;
        auto it = lower_bound(heights.begin(), heights.end(), height);
        heights.insert(it, height);
    }

    for(i = 0; i <= questions - 1; i++) {
      cin >> needle;
      count = 0;
      for(int value : heights) {
        if (needle >= value) {
          break;
        }
        count++;
      }

      if (needle >= heights[total - 1]) {
        count = total;
      }

      cout << count << endl;
    }

    for (int val : heights) {
      std::cout << val << " ";
    }

    cout << endl;
    return 0;
}
