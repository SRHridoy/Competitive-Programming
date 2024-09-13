#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

int main(){
    optimize();

    ll n;cin >> n;
    if(n<=1e3-1)cout << n << endl;
    else if(n>=1e3 and n<= 1e4-1)cout << (n/10)*10 << endl;
    else if(n>=1e4 and n<=1e5-1)cout << (n/100)*100 << endl;
    else if(n>=1e5 and n<=1e6-1)cout << (n/1000)*1000 << endl;
    else if(n>=1e6 and n<=1e7-1)cout << (n/10000)*10000 << endl;
    else if(n>=1e7 and n<=1e8-1)cout << (n/100000)*100000 << endl;
    else{
        cout << (n/1000000)*1000000 << endl;
    }
}
