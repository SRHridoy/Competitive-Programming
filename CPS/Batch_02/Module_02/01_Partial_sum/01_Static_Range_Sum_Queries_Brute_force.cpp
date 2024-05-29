#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

const int mx = 2e5+123;
int a[mx];

int main(){
    optimize();

    int n,q;
    cin >> n >> q;

    for(int i = 1; i <= n; i++) cin >> a[i];

    while (q--)
    {
        int l,r;
        cin >> l >> r;
        long long sum = 0;
        for(int i = l; i <= r; i++)
        sum+=a[i];
        cout << sum << endl;
    }
     
}
