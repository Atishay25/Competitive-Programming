#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll f(ll a){
    ll val = 1;
    while(val <= a){
        val = val*2;
    }
    return val;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << n << endl;
        for(ll i = 0; i < n; i++){
            ll v;
            cin >> v;
            cout << i+1 << " " <<  f(v) - v << endl;
        }
    }
}       