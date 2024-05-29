#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

ll preSum[mx];
int main(){
    optimize();

    int n,x;
    cin >> n >> x;
    int a[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        preSum[i] = preSum[i-1]+a[i];
    }
    map<ll,int>m;
    ll ans = 0;
    m[0] = 1;
    for(int i = 1 ; i <= n; i++){
        ll l = preSum[i]-x;
        ans+=m[l];
        m[preSum[i]]++;
    }

    cout << ans << endl;

    
}
