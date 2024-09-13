#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

int main(){
    optimize();

    int r1,r2,d1,d2;
    cin >> r1 >> r2 >> d1 >> d2;

    if((r1+d1)>(r2+d2))cout << "Dominater" << endl;
    else cout << "Everule" << endl;
}
