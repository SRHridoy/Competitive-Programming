#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

void solve(){
    vector<int>a(3);
    for(int i = 0; i < 3;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    ans = abs(a[1]-a[0]) + abs(a[1]-a[2]);
    cout << ans << endl;
}

int main(){
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
}
