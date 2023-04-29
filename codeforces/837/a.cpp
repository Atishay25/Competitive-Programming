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
        long int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        long long int minCount = 1, maxCount = 1;
        if(a[n-1] == a[0]){
            cout << n*(n-1) << endl;
            continue;
        }
        for(int i = 1; i < n; i++){
            if(a[i] == a[0]) minCount++;
            else break;
        }
        for(int i = n-2; i >= 0; i--){
            if(a[i] == a[n-1]) maxCount++;
            else break;
        }
        long long int ans = 2*minCount*maxCount;
        cout << ans << endl;
    }
}