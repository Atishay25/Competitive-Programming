#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        map<int,int> count;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            count[i+1] = 0;
        }
        for(int i = 0; i < n; i++){
            count[a[i]]++;
        }
        for(auto it:count){
            if(it.second >= )
        }
        cout << "==========\n";
    }
}