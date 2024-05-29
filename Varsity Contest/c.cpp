#include"bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>v(n);
   // vector<int>v1(n+1);
   int sum = 0;
    for(int i = 0; i< n-1; i++){
        cin >> v[i];
        sum+=v[i];
    }
    
    
    int sumN = 0;
    for(int i = 1; i <= n; i++){
        sumN+=i;
    }
    cout << sumN - sum << endl;
    
}
