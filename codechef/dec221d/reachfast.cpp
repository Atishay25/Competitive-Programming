#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int x, y, k, steps = 0;
        cin >> x >> y >> k;
        if(x == y){
            cout << steps << endl;
            continue;
        }
        else if(x < y){
            while(x < y){
                x += k;
                steps++;
            }
            cout << steps << endl;
            continue;
        }
        else {
            while(x > y){
                x -= k;
                steps++;
            }
            cout << steps << endl;
            continue;
        }
    }
}