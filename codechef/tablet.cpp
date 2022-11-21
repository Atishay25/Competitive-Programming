#include<iostream>
using namespace std;

// https://www.codechef.com/problems/TABLET

int main(){
    int t;
    cin >> t;
    while(t--){
        int num, budget;
        int w, h, price;
        cin >> num >> budget;
        int max_area = 0;
        while(num--){
            cin >> w >> h >> price;
            if(price > budget) continue;
            if(max_area < w*h){
                max_area = w*h;
            }
        }
        if(max_area == 0) cout << "no tablet\n";
        else cout << max_area << endl;
    }
}