#include<iostream>
#include<cmath>
using namespace std;

// https://www.codechef.com/problems/ELECTIONS

int main(){
    int t;
    cin >> t;
    while(t--){
        int A, B, C;
        cin >> A >> B >> C;
        if(A > 50) cout << "A\n";
        else if(B > 50) cout << "B\n";
        else if(C > 50) cout << "C\n";
        else cout << "NOTA\n";
    }
}