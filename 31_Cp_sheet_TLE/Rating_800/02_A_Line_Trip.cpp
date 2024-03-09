#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x; 
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int store[n];
    for (int i = 0; i < n; i++)
    {
        if(i<n-1)
            store[i] = a[i+1]-a[i];
        
    }

    store[n-1] = 2*(x-a[n-1]);

    int maxi = *max_element(store,store+n);
    
    maxi = max(maxi, a[0]);
    cout << maxi << endl;
    return;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
}