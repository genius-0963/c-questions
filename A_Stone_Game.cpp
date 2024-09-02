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
        
        // Find the positions of the minimum and maximum elements
        int min_pos = min_element(a, a + n) - a;
        int max_pos = max_element(a, a + n) - a;
        
        // Ensure min_pos is less than max_pos
        if (min_pos > max_pos) {
            swap(min_pos, max_pos);
        }
        
        // Calculate all possible move scenarios
        int move1 = max_pos + 1;               // From the start to max_pos
        int move2 = n - min_pos;               // From min_pos to the end
        int move3 = min_pos + 1 + n - max_pos; // Min from start and max from end
        
        // Find the minimum number of moves
        int result = min(move1, min(move2, move3));
        cout << result << endl;
    }
    
    return 0;
}

             

