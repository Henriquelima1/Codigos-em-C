#include <iostream>
#include <vector>

using namespace std;

int josephus(int n, int k) {
    if (n == 1)
        return 0;
    else
        return (josephus(n - 1, k) + k) % n;
}

int main() {
    int NC;
    cin >> NC;
    for (int i = 1; i <= NC; ++i) {
        int n, k;
        cin >> n >> k;
        cout << "Case " << i << ": " << josephus(n, k) + 1 << endl;
    }
    return 0;
}
