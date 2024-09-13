#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

int main(){
    optimize();

    int a,b,x,y;
    cin >> a >> b >> x >> y;

    a*=2;
    x*=2;

    a+=b;
    x+=y;

    if(a>x) cout << "Messi" << endl;
    else if(a<x) cout << "Ronaldo" << endl;
    else cout << "Equal" << endl;
}
