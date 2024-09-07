#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        long long moves_x = (x + k - 1) / k;  // equivalent to ceil(x / k)
        long long moves_y = (y + k - 1) / k;  // equivalent to ceil(y / k)

        cout << moves_x + moves_y << endl;
    }

    return 0;
}
