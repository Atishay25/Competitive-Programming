#include<bits/stdc++.h>
using namespace std;

#define ll long long 

void solve(){
    ll n;
    cin >> n;
    ll a[2*n];
    for(ll i = 0; i < 2*n; i++) cin >> a[i];
    sort(a,a+2*n);
    ll min = a[n-1] - a[0];
    for(ll i = 1; i <= n; i++){
        if(a[i+n-1] - a[i] < min){
            min = a[i+n-1] - a[i];
        }
    }
    cout << min << endl;
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