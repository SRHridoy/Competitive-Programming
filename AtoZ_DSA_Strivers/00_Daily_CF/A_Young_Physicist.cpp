#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int n;
    cin >> n;
    vector<int>v1(n);
    vector<int>v2(n);
    vector<int>v3(n);
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v1.push_back(a);
        v2.push_back(b);
        v3.push_back(c);
    }
    int sum1 = accumulate(v1.begin(),v1.end(),0);
    int sum2 = accumulate(v2.begin(),v2.end(),0);
    int sum3 = accumulate(v3.begin(),v3.end(),0);
    if(sum1==0 and sum2==0 and sum3==0) cout << "YES" << endl;
    else cout << "NO" << endl;
}
