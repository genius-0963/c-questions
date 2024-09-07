#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // number of test cases

    while (t--) {
        int n;
        cin >> n;  // number of rows

        vector<int> positions;  // to store the column positions

        for (int i = 0; i < n; i++) {
            string row;
            cin >> row;

            for (int j = 0; j < 4; j++) {
                if (row[j] == '#') {
                    positions.push_back(j + 1);  // store the 1-indexed column
                    break;
                }
            }
        }

        // Output in reverse order (from bottom to top)
        for (int i = n - 1; i >= 0; i--) {
            cout << positions[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
