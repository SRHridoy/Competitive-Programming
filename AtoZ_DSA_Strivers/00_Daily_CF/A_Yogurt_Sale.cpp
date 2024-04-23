#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if(n==1)cout << a << endl;
        else{
            int ans = 0;
            if(2*a<=b){
                ans+=a*n;
            }else{
                ans+=(n/2)*b;
                int remain = n%2;
                ans+=remain*a;
            }
            cout << ans << endl;
        }
    }
    
}
