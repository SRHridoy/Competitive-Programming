#include"bits/stdc++.h"
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    bool alreadySorted = true;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    if(a[0]==1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
