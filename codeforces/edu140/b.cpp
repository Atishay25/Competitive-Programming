#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a+1,a+n);
        int j = 0;
        for(int i = 1; i < n; i++){
            if(a[i] > a[0]){
                j = i;
                break;
            }
        }
        for(int i = j; i < n; i++){
            if(a[0] < a[i]){
                ll diff = a[i] - a[0];
                if(diff%2){
                    a[0] += (diff/2) + 1;
                }
                else a[0] += (diff)/2;
            }
        }
        cout << a[0] << endl;
    }
}