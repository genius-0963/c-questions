 #include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int min_pos = min_element(a, a + n) - a;
        int max_pos = max_element(a, a + n) - a;

        if (min_pos > max_pos) {
            swap(min_pos, max_pos);
        }
        
        
        int move1 = max_pos + 1;        
        int move2 = n - min_pos;
        int move3 = min_pos + 1 + n - max_pos; 
        int result = min(move1, min(move2, move3));
        cout << result << endl;
    }
    
    return 0;
}

             

