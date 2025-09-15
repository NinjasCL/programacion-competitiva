// g++ solution-o(n).cpp -o solution
#include <iostream>
    
using namespace std;
    
int main() {
    long long n, k, available, total, acc;
    
    cin >> n >> k;
    
    available = 240 - k;
    total = 0;
    acc = 0;
    
    for(int i = 1; i <= n; i++) {
        acc += i * 5;
        if (acc <= available) {
            total += 1;
        }
    }
    
    cout << total << endl;
    
    return 0;
}