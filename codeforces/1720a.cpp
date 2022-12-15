#include <bits/stdc++.h>
using namespace std;

bool isInteger(long double N){
    long long int X = N;
    long double temp2 = N - X;
    if (temp2 > 0) {
        return false;
    }
    return true;
}
 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long double a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a/b == c/d) cout << 0 << endl;
        else if(isInteger((c*b)/(a*d))) cout << 1 << endl;
        else if(isInteger((a*d)/(b*c))) cout << 1 << endl;
        else cout << 2 << endl;
    }
}