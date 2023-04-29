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
        string s;
        cin >> s;
        for(int i = 0; i < n + 1; i++){
            string p = s.substr(i, n);
            s.replace(s.begin() + i, n,"");
        }
    }
}