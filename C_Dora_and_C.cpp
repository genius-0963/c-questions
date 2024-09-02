#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for std::gcd

void solve() {
    int n, a, b;
    std::cin >> n >> a >> b;

    int gcd_ab = std::gcd(a, b);

    std::vector<int> c(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> c[i];
        c[i] %= gcd_ab;
    }

    std::sort(c.begin(), c.end());

    int min_range = c[n - 1] - c[0];

    for (int i = 0; i < n - 1; ++i) {
        min_range = std::min(min_range, c[i] + gcd_ab - c[i + 1]);
    }

    std::cout << min_range << std::endl;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
