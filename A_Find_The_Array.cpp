#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int t;
    cin >> t;  
    while (t--) {
        int s;
        cin >> s; 
        
        int current_sum = 0;
        int next_value = 1;
        int count = 0;
        
        while (current_sum < s) {
            current_sum += next_value;
            next_value += 2; 
            count++;
        }
        
        cout << count << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
