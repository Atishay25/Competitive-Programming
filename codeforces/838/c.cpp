#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll goodextension(string s){
    string ext = s;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll sum = 0;
        ll t = "string";
        for(int i = 0; i < n; i++){
            string s1 = s.substr(0,i+1);
            sum += (goodextension(s1) % 998244353);
        }
        cout << endl;
    }
}