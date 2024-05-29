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
        int n, m, k;
        cin >> n >> m >> k;
        if(m == 1 || k >= n - (n + m - 1) / m){
		cout << "NO\n";
        }else{
            cout << "YES\n"; 
        }
    }
    
}
