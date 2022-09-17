#include<iostream>
using namespace std;

// https://codeforces.com/problemset/problem/977/A

int main(){
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < k; i++){
        if(n%10) n--;
        else{
            n = n/10;
        }
    }
    cout << n << endl;
}