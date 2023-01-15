#include<bits/stdc++.h>
using namespace std;

#define ll long long 

void solve(){
    ll n;
    cin >> n;
    ll a[n], b[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];
    ll max_elem = *max_element(a,a+n);
    ll min_elem = *min_element(a,a+n);
    vector<ll> diffs;
    diffs.push_back(max_elem-min_elem);
    for(ll i = 0; i < n; i++){
        if(a[i] == min_elem || a[i] == max_elem){
        if(b[i] > min_elem){
            a[i] = b[i];
            min_elem = a[i];
            diffs.push_back(max_elem - min_elem);
        }
        else if(b[i] < max_elem){
            a[i] = b[i];
            max_elem = a[i];
            diffs.push_back(max_elem - min_elem);
        }
        }
    }
    for(ll i = 0; i < n; i++) cout << a[i] << " ";
    cout << '\n';
    //for(auto it:diffs) cout << it << endl;
    ll diff = *min_element(diffs.begin(),diffs.end());
    cout << diff << endl;
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