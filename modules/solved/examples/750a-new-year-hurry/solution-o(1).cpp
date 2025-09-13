// g++ solution.cpp -o solution
// by: Marcelo Guzman 13/09/2025
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, demora;
    cin >> n >> demora;

    long long disponible = 240 - demora;

    long long problema = (-1.0 + sqrt(1.0 + (8.0 * disponible) / 5.0)) / 2.0;

    if (problema > n) {
      problema = n;
    }
    
    cout << problema << endl;
    return 0;
}
