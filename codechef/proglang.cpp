#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int A, B, A1, B1, A2, B2;
        cin >> A >> B >> A1 >> B1 >> A2 >> B2;
        if((A1 == A && B1 == B) || (A1 == B && B1 == A)){
            cout << "1\n";        
        }
        else if((A2 == A && B2 == B) || (A2 == B && B2 == A)){
            cout << "2\n";
        }
        else cout << "0\n";
    }
}