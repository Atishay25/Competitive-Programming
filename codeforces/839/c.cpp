#include<bits/stdc++.h>
using namespace std;

#define ll long long 

void makeAP(int start, int end){
    int c = 0;
    for(int i = start; i <= end; i = i + c){
        cout << start << " ";
    }
    cout << endl;
}

void solve(){
    int k, n;
    cin >> k >> n;
    int done = 1;
    for(int i = 0; i <= n; i++){
        if((k-i) == (k-i-1)*(k-i)/2){
            makeAP(i,n);
            break;
        }
        else{
            cout << i+1 << " ";
        }
        done++;
    }
    cout << endl;
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