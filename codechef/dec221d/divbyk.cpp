#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        long long int k;
        bool found = false;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long int prod = 1;
        for(int i = 0; i < n; i++){
            prod = prod*a[i];
        }
        // for(int i = 0; i < n; i++){
        //     prod = prod/a[i];
        //     if(prod % k == 0){
        //         cout << "YES\n";
        //         found = true;
        //         break;
        //     }
        //     prod = prod*a[i];
        // }
        if(prod % k == 0) found = true;
        if(found){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}