#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        double income = pow(2,x);
        while(n--){
            income -= income/2;
        }
        cout << income << endl;
    }
}
