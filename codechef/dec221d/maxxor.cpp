#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        int a1 = 0, a0 = 0, b1 = 0, b0 = 0;
        for(int i = 0; i < a.length(); i++){
            if(a[i] == '1') a1++;
            else if(a[i] == '0') a0++;
        }
        for(int i = 0; i < b.length(); i++){
            if(b[i] == '1') b1++;
            else if(b[i] == '0') b0++;
        }
        string ans = "";
        int num_1 = min(a0,b1) + min(a1,b0);
        for(int i = 0; i < a.length(); i++){
            if(i < num_1) ans += '1';
            else ans += '0';
        }
        cout << ans << endl;
    }
}