#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;
vector<int>adj[mx];
bool vis[mx];
int cnt,cnt1;
bool isNode[mx];

void dfs(int u, int col){
    vis[u] = true;
    if(col==1) cnt1++;
    cnt++;
    int tmp;
    if(col==1)tmp = 2;
    else tmp = 1; 
    for(auto v:adj[u]){
        if(vis[v]==false){
            dfs(v,tmp);
        }
    }
}

int main(){
    optimize();
    
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        //clearing prev:
        for(int i = 1; i<=mx; i++){
            adj[i].clear();
            isNode[i] = false;
            vis[i] = false;
        }
        //Must clear for testcase ....
        int m;
        cin >> m;
        for(int i = 1; i <=m; i++){
            int u,v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);

            isNode[u] = true;
            isNode[v] = true;
        }

        int ans = 0;
        for(int i = 1; i <= 2e4; i++){
            if(isNode[i] == true and vis[i]== false){
                cnt = 0,cnt1 = 0;
                dfs(i,1);

                ans += max(cnt1,cnt-cnt1);
            }
        }
        cout << "Case " <<i <<": " <<ans << endl;
    }

    
    
    
}
