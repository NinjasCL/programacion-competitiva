// g++ solution.cpp -o solution

#include <iostream>
using namespace std;

int main() 
{
    long long friends, fence;
    cin >> friends >> fence;

    long long total, height, i;
    total = friends;

    for(i = 0; i < friends; i++) {
        cin >> height;
        if (height > fence) {
            total += 1;
        }
    }

    cout << total << endl;
    return 0;
}