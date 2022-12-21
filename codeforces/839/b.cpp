#include<bits/stdc++.h>
using namespace std;

#define ll long long 

bool check(ll a,ll b,ll c,ll d){
    if(a < b && a < c && c < d && b < d) return true;
    else return false;
}

void solve(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if(check(a,b,c,d) || check(c,a,d,b) || check(d,c,b,a) || check(b,d,a,c)) cout << "YES\n";
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