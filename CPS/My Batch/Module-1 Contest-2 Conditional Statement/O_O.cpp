#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

int main(){
    optimize();

    int x,y;
    cin >> x >> y;
    if(x<y)cout << "Old" << endl;
    else if(x>y) cout << "New" << endl;
    else cout << "Same" << endl;
}
