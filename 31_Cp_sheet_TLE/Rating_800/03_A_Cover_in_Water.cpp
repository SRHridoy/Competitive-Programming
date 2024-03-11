#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
   vector<int>store(n);
    int count = 0;
    int countHash = 0;
    for(int i = 0; i < n; i++){
        if(s[i]=='#'){
            store[i]=count;
            count = 0;
            countHash++;
        }else{
            count++;
        }
        if(i==s.size()-1 and countHash==0){
            store[i] = count;
        }
    }
    if (count > 0 && countHash > 0) {
        store[n - 1] = count;
    }
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << store[i] << " " << endl;
    // }
    
    int equalOrMoreThan3 = *max_element(store.begin(),store.end());
    //cout << equalOrMoreThan3 << endl;

    if(equalOrMoreThan3>=3){
        cout << 2 << endl;
        return;
    }else if (countHash==n){
        cout << 0 << endl;
    }else{
        cout << accumulate(store.begin(),store.end(),0)<< endl;
    }
    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}