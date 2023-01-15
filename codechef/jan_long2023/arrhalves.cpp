#include<bits/stdc++.h>
using namespace std;

#define ll long long 

void solve(){
    ll n;
    cin >> n;
    ll p[2*n];
    vector<ll> index;
    for(ll i = 0; i < 2*n; i++){
        cin >> p[i];
        if(p[i] <= n) index.push_back(i); 
    } 
    ll op = 0;
    for(ll i = 0; i < n; i++){
        op += index[i] - i;
    }
    cout << op << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}