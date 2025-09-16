// g++ solution-o(1).cpp -o solution
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n, k, answer, available;
    cin >> n >> k;

    available = 240 - k;

    answer = (-1 + sqrt(1 + (8 * available) / 5)) / 2;
    // also can be: clamp(answer, 0, n);
    answer = min(max(answer, 0), n);
    
    cout << answer << endl;
    return 0;
}
