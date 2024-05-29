#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

int preXor[mx];

int main(){
    optimize();

    int n, q;
    cin >> n >> q;

    int a[mx];

    for(int i = 1; i <= n; i++){
        cin >> a[i];
        preXor[i] = preXor[i-1]^a[i];
    }

    for(int i = 0; i < q; i++){
        int l,r;
        cin >> l >> r;
        int ans = preXor[r] ^ preXor[l-1];
        cout << ans << endl;
    }
}
