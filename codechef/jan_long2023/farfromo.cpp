#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double

void solve(){
    ld x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    ld alex = sqrt(x1*x1 + y1*y1);
    ld bob = sqrt(x2*x2 + y2*y2);
    if(alex > bob) cout << "ALEX\n";
    else if(bob > alex) cout << "BOB\n";
    else cout << "EQUAL\n";
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