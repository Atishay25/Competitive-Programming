#include<bits/stdc++.h>
using namespace std;

#define ll long long 

void solve(){
    int x;
    cin >> x;
    if(x < 4) cout << "MILD\n";
    else if(x >= 7) cout << "HOT\n";
    else cout << "MEDIUM\n";
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