#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        map<int, long long> balance_map;

        // Generate all possible balances
        for (int i = 0; i < (1 << n); ++i) {
            long long left_weight = 0, right_weight = 0;
            int left_width = 0, right_width = 0;

            for (int j = 0; j < n; ++j) {
                if (i & (1 << j)) {
                    left_weight += a[j];
                    left_width += b[j];
                } else {
                    right_weight += a[j];
                    right_width += b[j];
                }
            }

            int balance = abs(left_width - right_width);
            if (balance_map.find(balance) != balance_map.end()) {
                balance_map[balance] = max(balance_map[balance], left_weight + right_weight);
            } else {
                balance_map[balance] = left_weight + right_weight;
            }
        }

        // Answer each query
        for (int i = 0; i < q; ++i) {
            int L, R;
            cin >> L >> R;

            long long max_weight = 0;
            auto it = balance_map.lower_bound(L);
            while (it != balance_map.end() && it->first <= R) {
                max_weight = max(max_weight, it->second);
                ++it;
            }

            cout << max_weight << endl;
        }
    }

    return 0;
}
