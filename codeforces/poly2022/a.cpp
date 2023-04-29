#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;
    string s, ans;
    cin >> s;
    int sum = 0;
    for(int i = 1; i < s.size(); i++){
        int add = int(s[i] - '0');
        int sub = - int(s[i] - '0');
        if(i == 1){
            add += int(s[i-1] - '0');
            sub += int(s[i-1] - '0');
        }
        if(abs(sum+sub) < abs(sum+add)){
            sum += sub;
            ans += '-';
        }
        else{
            sum += add;
            ans += '+';
        }
        //cout << s[i-1] << " " << s[i] << " " << sum << endl;
    }
    cout << ans << endl;
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