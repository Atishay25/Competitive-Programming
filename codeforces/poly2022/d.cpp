#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n, m;
    cin >> n >> m;
    ll total_ones = 0;
    vector<vector<int>> data;
    for(ll i = 0; i < n; i++){
        vector<int> line;
        int ones = 0;
        for(ll j = 0; j < m; j++){
            int x;
            cin >> x;
            if(x == 1) ones++;
            line.push_back(x);
        }
        total_ones += ones;
        line.push_back(ones);
        line.push_back(-1);
        data.push_back(line);
    }
    if(total_ones%n){
        cout << -1 << endl;
        return;
    }
    ll avg = total_ones / n;
    vector<ll> pehla, doosra, teesra;
    ll op = 0;
    for(ll i=0; i<n-1; i++){
        if(data[i][m] == avg || data[i][m+1] == 2) continue;
        for(ll j = i+1; j < n; j++){
            if(data[j][m] - avg + data[i][m] - avg == 0){
                data[i][m+1] = 2;
                ll diff = abs(data[j][m] - avg);
                ll done = 0;
                for(ll k = 0; k < m; k++){
                    if(done >= diff) break;
                    if(data[j][k] != data[i][k]){
                        op++;
                        pehla.push_back(j+1);
                        doosra.push_back(i+1);
                        teesra.push_back(k+1); 
                        done++;
                    }
                }
            }
        }
    }
    cout << op << endl;
    for(int i = 0; i < pehla.size(); i++){
        cout << pehla[i] <<  " " << doosra[i] << " " << teesra[i] << endl;
    }
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