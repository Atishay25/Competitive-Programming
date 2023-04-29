#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a;
        for(int i = 0; i < n; i++){
            int ai;
            cin >> ai;
            a.push_back(ai);
        }
        sort(a.begin(), a.end());
        int op = 0;
        for(int i = 0; i < n; i++){
            if(i+1 >= a[i]){
                op += i + 1 - a[i];
            }
            else{
                op = -1;
                break;
            }
        }
        cout << op << endl;
    }
}