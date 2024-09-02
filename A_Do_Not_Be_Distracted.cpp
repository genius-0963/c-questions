#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string tasks;
        cin >> tasks;

        set<char> completedTasks;
        bool suspicious = false;

        for (int i = 0; i < n; i++) {
            if (completedTasks.find(tasks[i]) != completedTasks.end() && tasks[i] != tasks[i-1]) {
                suspicious = true;
                break;
            }
            completedTasks.insert(tasks[i]);
        }

        if (suspicious) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
