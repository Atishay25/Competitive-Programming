#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(x > y) cout << "LOSS\n";
        else if(x < y) cout << "PROFIT\n";
        else cout << "NEUTRAL\n";
    }
}