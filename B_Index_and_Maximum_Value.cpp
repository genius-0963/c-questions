#include<bits/stdc++.h>
using namespace std;
void solve() {
        int a, q; cin >> a >> q;
        int ans = 0;
        for(int i = 1; i <= n; i++) {
                int x; cin >> x;
                ans = max(ans, x);
        }
        while(q--) {
                char c; int l, r;
                cin >> c >> l >> r;
                if(l <= ans && ans <= r) {
                        if(c == '-') ans--;
                        else ans++;
                }
                cout << ans << " ";
        }
        cout << '\n';
}
int main() {
        int t; cin >> t;
        while(t--) {
                solve();
        }
}