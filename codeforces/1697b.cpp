#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<long long int> c;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        c.push_back(k);
    }
    sort(c.begin(), c.end());
    reverse(c.begin(), c.end());
    vector<long long int> b;
    b = c;
    for(int i = 1; i < n; i++){
        b[i] = b[i-1] + c[i];
    }
    while(q--){
        int x, y;
        cin >> x >> y;
        if(x!=y) cout << b[x-1] - b[x-1-y] << endl;
        else cout << b[x-1] << endl;
    }
}