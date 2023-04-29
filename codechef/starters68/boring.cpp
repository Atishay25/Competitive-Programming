#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        string str;
        cin >> n;
        cin >> str;
        vector<string> substr;
        string s;
        s += str[0];
        substr.push_back(s);
        for(int i = 0; i < n-1; i++){
            if(str[i] == str[i+1]){
                substr[substr.size() - 1] += str[i+1]; 
            }
            else{
                string s;
                s += str[i+1];
                substr.push_back(s);
            }
        }
        if(substr.size() == 1){
            cout << n-1 << endl;
            continue;    
        }
        vector<bool> visited(substr.size(),false);
        int max = 0;
        for(int i = 0; i < substr.size(); i++){
            if(visited[i]) continue;
            int count = 1;
            for(int j = i+1; j < substr.size(); j++){
                if(substr[i] == substr[j]){
                    visited[j] = true;
                    count++;
                }
            }
            if(count > 1){
                if(substr[i].size() > max){
                    max = substr[i].size();
                }
            }
        }
        cout << max << endl;
    }
}
