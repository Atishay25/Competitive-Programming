#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    vector<bool> total;
    vector<ll> count;
    for(ll i = 0; i < n; i++){
        total.push_back(false);
    }
    for(ll i = 0; i < m; i++){
        ll m_num;
        cin >> m_num;
        count.push_back(m_num);
    }
    ll m_i = 0;
    bool ans = true;
    for(ll i = 0; i < n; i++){
        if(total[i] == true) continue;
        else if(m_i >= m) break;
        else{
            // cout << "mi: " << count[m_i] << " " << m_i  << " " << i << endl;
            for(ll j = i; j < i + k*count[m_i]; j = j + k){
                //cout << j << endl;
                if(j >= n){
                    cout << "NO\n";
                    return;
                }
                total[j] = true;
            }
            m_i++;
        }
        //for(int i = 0; i < n; i++){
        //    cout << total[i] << " ";
        //}
        //cout << endl;
    }
    cout << "YES\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}