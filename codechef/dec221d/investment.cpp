#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(x >= 2*y) cout << "YES\n";
        else cout << "NO\n";
    }
}