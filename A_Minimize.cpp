#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // number of test cases
    while (t--) {
        int a, b;
        cin >> a >> b;  // read a and b
        cout << b - a << endl;  // output the result
    }
    return 0;
}
