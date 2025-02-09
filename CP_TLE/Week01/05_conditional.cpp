#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

int main(){
    optimize();

    bool is_hot = true;
    bool is_raining = true;

    if(is_hot && is_raining){
        cout << "It's a great day and It's Raining!" << endl;
    }else if(is_hot && !is_raining){
        cout << "It's summer" << endl;
    }else{
        cout << "It's a lovelyday!";
    }
}
