#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,x,c;
        cin >> n >> x >> c;
        int a[n];
        int z = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            z += a[i];
        }
        sort(a,a+n);
        for(int i = 0; i < n; i++){
            if(z-a[i]+x-c > z){
                z = z - a[i] + x - c;
            }
            else break;
        }
        cout << z << endl;
    }
}
