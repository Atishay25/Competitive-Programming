#include<bits/stdc++.h>
using namespace std;

#define ll long long 

void solve(){
    int n, x, cost = 0;
    cin >> n >> x;
    int a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n; i++){
        if(a[i] >= x) cost += b[i];
    }
    cout << cost << endl;
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