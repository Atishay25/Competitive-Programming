#include<iostream>
#include<vector>
#include<string>
using namespace std;

void abbvt(string word){
    int n = word.length();
    if(n > 10){
        string var, len;
        len = to_string(n-2);
        var = word[0] + len + word[n-1];
        cout << var << endl;
    }
    else{
        cout << word << endl;
    }
}

int main(){
    int n;
    cin >> n;
    vector<string> words;
    for(int i = 0; i < n; i++){
        string word;
        cin >> word;
        words.push_back(word);
    }
    for(int i = 0; i < n; i++){
        abbvt(words[i]);
    }
}