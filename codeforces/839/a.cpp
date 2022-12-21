#include<bits/stdc++.h>
using namespace std;

#define ll long long 

void solve(){
    string s;
    cin >> s;
    int a = int(s[0] - '0');
    int b = int(s[2] - '0');
    cout << a+b << endl;
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