#include<bits/stdc++.h>
using namespace std;

#define ll long long 

void solve(){
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    ll zero_a = count(a.begin(), a.end(),'0');
    ll zero_b = count(b.begin(), b.end(), '0');
    if(zero_a == zero_b) cout << "YES\n";
    else cout << "NO\n";
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