#include"bits/stdc++.h"
using namespace std;

void solve(){
    vector<int>v(4);
    for(int i = 0; i < 4; i++){
        cin >> v[i];
    }
    int count = 0;
    for(int i = 1; i < 4; i++){
        if(v[0]<v[i]){
            count++;
        }
    }
    cout << count << endl;
}
int main(){
   int t;
   cin >> t;
   while (t--)
   {
    solve();
   }
    
}
