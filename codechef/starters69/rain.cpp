#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x < 3) cout << "LIGHT\n";
        else if(x >= 7) cout << "HEAVY\n";
        else cout << "MODERATE\n";
    }
}