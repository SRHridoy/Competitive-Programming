#include"bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int>v1;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v1.insert(a);
    }
    int q;cin >> q;
    int cnt = 0;
    vector<int>v2(q);
    vector<int>ans;
    for(int i = 0; i < q; i++){
        cin >> v2[i];
        int a = binary_search(v1.begin(),v1.end(),v2[i]);
        ans.push_back(a);
    }
    for(int i = 0; i < ans.size(); i++){
        cout << ans [i] << " " <<endl;
    }
    cnt = ans.size();
    cout << cnt << endl;
}
