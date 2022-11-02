#include<iostream>
#include<cmath>
using namespace std;

// https://codeforces.com/problemset/problem/1485/A

int main(){
    int t, a, b, op;
    cin >> t;
    while(t--){
        cin >> a >> b;
        op = 0;
        while(a != 0){
            int c = (log(a)/log(b)), d = (log(a)/log(b+1));
            if(a/b == a ){
                b++;
                op++;
                continue;
            }
            else if(c > d){
                b++;
            }
            else{
                a = a/b;
            }
            op++;
        }
        cout << op << endl;
    }
}