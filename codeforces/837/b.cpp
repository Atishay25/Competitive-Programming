#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        map<int, vector<int>> mp;
        for(int i = 0; i < m ;i++){
            int a, b;
            cin >> a >> b;
            if(b < a){
                swap(a, b);
            }
            if(mp[a].size() == 0) mp[a].push_back(b);
            else{
                if(mp[a][0] > b){
                    mp[a][0] = b;
                }
            }
        }
        int good = 0;
        if(m == 0){
            cout << n*(n+1)/2 << endl;
            continue;
        }
        for(int i = 1; i <= n; i++){
            int s = n + 1;
    map<int, vector<int>>::reverse_iterator it;
  
    // rbegin() returns to the last value of map
    for (it = mp.rbegin(); it != mp.rend(); it++) {
        if(it->first < i) break;
        if(it->second.at(0) < s) s = it->second.at(0); 
    }
            // for(auto it:mp){
                   // cout << it.first << " lmao " << endl;
            //     if(it.first >= i){
            //         if(it.second[0] < s) s = it.second[0];
            //     }
            // }
            good += (s - i);
            // cout << i << " " << stop[i] << endl;
        }
        cout << good << endl;
    }
}