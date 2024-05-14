#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

int a[mx];
ll preSum[mx];

int main(){
    optimize();

    int n, q;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        //Pre-calculation
        //Offline query processing
        //Pre-computation
        preSum[i] = preSum[i-1]+a[i];
    }
    cin >> q;
    while (q--)
    {
        int l,r;
        cin >> l >> r;
        cout << preSum[r+1]-preSum[l] << endl;
    }
    
}
