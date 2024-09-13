#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

int main(){
    optimize();

    int n;
    cin >> n;
    
    while (n>0)
    {
        int digit = n%10;
        n/=10;
        cout << digit;
    }

    int ans = n%5;
    cout << ans+5 << endl;
}
