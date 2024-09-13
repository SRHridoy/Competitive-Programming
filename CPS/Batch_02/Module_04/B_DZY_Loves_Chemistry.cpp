#include "bits/stdc++.h"
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5 + 123;

vector<int> adj[mx];
bool vis[mx];
void dfs(int u)
{
    vis[u] = true;
    for (auto v : adj[u])
    {
        if (vis[v] == false)
        {
            dfs(v);
        }
    }
}

int main()
{
    optimize();

    int n, m;
    cin >> n >> m;
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    else
    {
        for (int i = 1; i <= m; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int cntConnected = 0;
        for (int i = 1; i <= n; i++)
        {
            if (vis[i] == false)
            {
                cntConnected++;
                dfs(i);
            }
        }
        ll ans = pow(2, n - cntConnected);
        cout <<ans << endl;
    }
}
