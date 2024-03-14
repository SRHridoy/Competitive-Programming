#include"bits/stdc++.h"
using namespace std;

void solve(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int>leftPocketCoins(n);
    vector<int>rightPocketCoins(m);

    for(int i = 0; i < n; i++){
        cin >> leftPocketCoins[i];
    }

    for(int i = 0; i < m; i++){
        cin >> rightPocketCoins[i];
    }

    //Sorting : 
    sort(leftPocketCoins.begin(),leftPocketCoins.end());
    sort(rightPocketCoins.begin(),rightPocketCoins.end());

    int cntSol = 0;
    for(int i = 0; i<n; i++){
        for (int j = 0; j<m ; j++)
        {
            if(leftPocketCoins[i]+rightPocketCoins[j]<=k)
                cntSol++;
            else
                break;
        }  
    }

    cout << cntSol << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
