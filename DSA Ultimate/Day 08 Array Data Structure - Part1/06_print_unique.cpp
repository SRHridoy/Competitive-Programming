#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

void findUnique(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
                break;
        }

        if(i==j)cout << arr[i] << " ";
        
    }
    
}

int main(){
    optimize();

    int arr[] = {1,1,2,2,1,3,3};
    findUnique(arr,6);
}