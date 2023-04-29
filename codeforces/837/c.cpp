#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        bool yee = false;
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                int gcd = __gcd(a[i],a[j]);
                if(gcd > 2){
                    yee = true;
                    break;
                }
            }
            if(yee) break;
        }
        if(yee) cout << "YES\n";
        else cout << "NO\n";
    }
}