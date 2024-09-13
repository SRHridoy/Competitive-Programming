#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

int main(){
    optimize();

    int a,b;
    cin >> a >> b;
    if(a>b)cout << "a > b" << endl;
    else if(a<b)cout <<"a < b" << endl;
    else cout << "a == b" <<endl;
}
