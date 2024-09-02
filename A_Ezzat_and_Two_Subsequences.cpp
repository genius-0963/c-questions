#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

void solve() {
    int t;
    cin >> t; 
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        long long sum = 0;
        int max_element = INT_MIN;
        
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            sum += arr[i]; 
            max_element = max(max_element, arr[i]);  
        }
        double result = max_element + (sum - max_element) / double(n - 1);
        cout << fixed << setprecision(9) << result << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
