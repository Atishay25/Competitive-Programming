#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t;
    cin >> t;
    while(t--){
        ll n;
        string s;
        cin >> n >> s;
        //ll k = count(s.begin(), s.end(), '1');
        //for (int x = 1 << k; x <= (1 << n) - (1 << (n - k)) + 1; ++x)
        //    cout << x << ' ';
        string x = "";
        for(ll i = 2; i <= n; i++){
            x += to_string(s[i-2]);
            ll k = count(x.begin(), x.end(), '1');
            cout << x << endl;
            cout << (pow(2,i) - pow(2,i-k) - pow(2,k) + 1) << " ";
        }
        cout << endl;
    }
}