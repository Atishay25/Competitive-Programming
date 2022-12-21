#include<bits/stdc++.h>
using namespace std;

#define ll long long 

void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll zero = 0, one = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == '1'){
            if(i%2) one++;
            else zero++;
        }
    }
    if(one > 0 && zero > 0) cout << 1 << endl;
    else cout << 2 << endl;
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