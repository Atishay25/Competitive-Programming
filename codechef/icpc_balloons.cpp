#include<iostream>
using namespace std;

// https://www.codechef.com/problems/BALLOON

int main(){
    int t;
    cin >> t;
    while(t--){
        int vibgyor = 0, solved = 0;
        int N;
        cin >> N;
        for(int i = 0; i < N; i++){
            int problem;
            cin >> problem;
            if(problem <= 7){
                vibgyor++;
            }
            solved++;
            if(vibgyor == 7){
                cout << solved << endl;
                vibgyor = 100;
            }
        }
    }
}