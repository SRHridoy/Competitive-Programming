#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;


vector<int>adj[mx];
int main(){
    optimize();

    int n, m;
    cin >> n >> m;
    
    for(int i = 1; i <= m ; i++){
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 1; i <=n ; i++){
        //cout << i << endl;
        for(auto u:adj[i]){
            cout << u << " ";
        }cout << endl;
    }
}
