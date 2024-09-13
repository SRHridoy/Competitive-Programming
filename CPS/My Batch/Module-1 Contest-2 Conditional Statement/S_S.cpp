#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

int main(){
    optimize();

    char a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<b)swap(a,b);
    if(c<d)swap(c,d);

    if(a-b==c-d || a-b==5-(c-d))cout<<"Yes\n";
    else cout<<"No\n";
    
}
