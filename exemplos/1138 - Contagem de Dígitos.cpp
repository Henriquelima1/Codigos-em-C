#include <iostream>
#include <vector>
#include <string>

using namespace std;

void countDigits(int num, vector<long long>& digitCount) {
    while (num > 0) {
        digitCount[num % 10]++;
        num /= 10;
    }
}

void countRange(int A, int B, vector<long long>& digitCount) {
    for (int i = A; i <= B; ++i) {
        countDigits(i, digitCount);
    }
}

int main() {
    int A, B;
    while (cin >> A >> B) {
        if (A == 0 && B == 0) break;
        vector<long long> digitCount(10, 0);
        countRange(A, B, digitCount);
        for (int i = 0; i < 10; ++i) {
            cout << digitCount[i] << (i < 9 ? " " : "\n");
        }
    }
    return 0;
}
