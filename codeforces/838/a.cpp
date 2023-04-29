#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll v[n];
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        ll sum = 0;
        vector<ll> v1;
        vector<ll> v2;
        vector<ll> v3;
        vector<ll> v0;
        for(auto it:v){
            if(it%8 == 3 || it%8 == 4) v0.push_back(it);
            else if(it%4 == 1) v1.push_back(it);
            else if(it%4 == 2) v2.push_back(it);
            else v3.push_back(it);
            sum += it;
        }
        if(sum%2 == 0){
            cout << 0 << endl;
            continue;
        }
        else if(v1.size() != 0 || v2.size() != 0){
            cout << 1 << endl;
            continue;
        }
        else if(v0.size() != 0){
            cout << 2 << endl;
            continue;
        }
        else{
            vector<ll> steps;
            for(auto it:v3){
                ll s = 0;
                if(it % 2){
                    while(it%2){
                        it = it/2;
                        s++;
                    }
                }
                else{
                    while(!(it%2)){
                        it = it/2;
                        s++;
                    }
                }
                steps.push_back(s);
            }
            cout << *min_element(steps.begin(),steps.end()) << endl;
        }
        // cout << sum << endl;
    }
}