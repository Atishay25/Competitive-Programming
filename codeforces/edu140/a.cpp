#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll x[3];
        ll y[3];
        for(int i = 0; i < 3; i++){
            cin >> x[i] >> y[i];
        }
        sort(x,x+3);
        sort(y,y+3);
        bool fx = false, fy = false;
        if(x[0] == x[1] || x[1] == x[2]) fx = true;
        if(y[0] == y[1] || y[1] == y[2]) fy = true;
        if(fx && fy) cout << "NO\n";
        else cout << "YES\n";
    }
}