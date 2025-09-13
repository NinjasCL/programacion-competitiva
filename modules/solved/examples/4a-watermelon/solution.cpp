// g++ solution.cpp -o solution
#include <iostream>

using namespace std;

int main() {
    int kg;
    cin >> kg;
    cout << (((kg & 1) == 1 || kg == 2) ? "NO" : "YES") << endl;
    return 0;
}