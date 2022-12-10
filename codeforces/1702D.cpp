#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1702/D

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string w;
        int p;
        map<int, vector<int> >mp;
        cin >> w >> p;
        int currPrice = 0;
        for(int i = 0; i < w.length(); i++){
            currPrice += int(w[i] - 96);        // ascii for a is 97
            mp[int(w[i] - 96)].push_back(i);    // mp[j] has list of indices with price as j
        }
        if(currPrice <= p){
            cout << w << endl;
            continue;
        }
        for(int i = 26; i > 0; i--){
            for(auto it:mp[i]){
                // cout << "iterator: " << w[it] << endl;
                currPrice -= int(w[it] - 96);
                w[it] = '\0';
                if(currPrice <= p){
                    break;
                }
            }
            if(currPrice <= p){
                break;
            }
        }
        string w1 = "";
        for(auto it:w){
            if(it != '\0'){
                w1 += it;
            }
        }
        cout << w1 << endl;
    }
}