#include "bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5 + 123;

vector<int> adj[mx];
bool vis[mx];

void dfs(int n) {
    vis[n] = true;
    cout << n << " ";
    for (auto u : adj[n]) {
        if (!vis[u]) {
            dfs(u);
        }
    }
}

int main() {
    optimize();

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Initialize visited array
    fill(vis, vis + mx, false);

    // Call dfs starting from node 1, assuming node 1 is within range
    if (n >= 1) {
        dfs(1);
    } else {
        cout << "The graph is empty or the starting node is out of range." << endl;
    }
    
    return 0;
}
