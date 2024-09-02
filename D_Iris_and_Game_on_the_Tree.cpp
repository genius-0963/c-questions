#include <bits/stdc++.h>

using namespace std;

const int MAX_NODES = 1e5 + 10;

vector<int> adj[MAX_NODES];
bool visited[MAX_NODES];
int nodeValues[MAX_NODES];
int count0, count1, count2;
int nodeCount;

void dfs(int node) {
    visited[node] = true;
    int childCount = 0;

    for (int neighbor : adj[node]) {
        if (visited[neighbor]) continue;
        ++childCount;
        dfs(neighbor);
    }

    if (childCount == 0) {
        if (nodeValues[node] == 0) ++count0;
        if (nodeValues[node] == 1) ++count1;
        if (nodeValues[node] == 2) ++count2;
    } else if (node != 1 && nodeValues[node] == 2) {
        ++nodeCount;
    }
}

void solve() {
    int n;
    cin >> n;
    nodeCount = 0;
    count0 = count1 = count2 = 0;

    for (int i = 1; i <= n; ++i) {
        adj[i].clear();
        visited[i] = false;
    }

    for (int i = 1; i < n; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    string s;
    cin >> s;
    
    for (int i = 0; i < n; ++i) {
        if (s[i] == '?') {
            nodeValues[i + 1] = 2;
        } else {
            nodeValues[i + 1] = s[i] - '0';
        }
    }

    dfs(1);

    int result = 0;
    if (nodeValues[1] == 0) {
        result = count1 + (count2 + 1) / 2;
    } else if (nodeValues[1] == 1) {
        result = count0 + (count2 + 1) / 2;
    } else if (nodeValues[1] == 2) {
        if (count0 == count1) {
            result = count1 + (count2 + (nodeCount % 2)) / 2;
        } else {
            result = max(count0, count1) + count2 / 2;
        }
    }

    cout << result << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
