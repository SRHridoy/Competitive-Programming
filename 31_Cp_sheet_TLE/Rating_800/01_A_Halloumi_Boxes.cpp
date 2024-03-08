#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    int a[n];
    bool alreadySorted = true;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 1; i < n; i++)
    {
        if(a[i]<a[i-1]){
            alreadySorted = false;
            break;
        }
    }
    if(alreadySorted){
        cout<< "YES" << endl;
        return;
    }else if(k==1){
        cout << "NO" << endl;
        return;
    }else{
        cout << "YES" << endl;
        return;
    }
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}