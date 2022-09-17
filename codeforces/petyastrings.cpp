#include<iostream>
#include<string>
using namespace std;

// https://codeforces.com/problemset/problem/112/A

int main(){
    string str1, str2;
    cin >> str1;
    cin >> str2;
    for(int i = 0; i < str1.length(); i++){
        if(str1[i] <= 90) str1[i]+=32;
        if(str2[i] <= 90) str2[i]+=32;
        if(str1[i] < str2[i]){
            cout << -1 << endl;
            break;
        }
        else if(str1[i] > str2[i]){
            cout << 1 << endl;
            break;
        }
    }
    if(str1 == str2) cout << 0 << endl;
}