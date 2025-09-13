// g++ solution.cpp -o solution
#include <iostream>

using namespace std;

int main() {
    int kg;
    cin >> kg;
    cout << ((kg & 1) == 0 ? "YES" : "NO") << endl;
    return 0;
}