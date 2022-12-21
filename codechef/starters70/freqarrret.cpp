#include<bits/stdc++.h>
using namespace std;

#define ll long long 

void solve(){
    ll n;
    cin >> n;
    ll b[n];
    for(ll i = 0; i < n; i++) cin >> b[i];
    for(ll i = 0; i < n; i++){
        if(count(b,b+n,b[i]) == b[i]){
            
        }
    }
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