#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        if(n < 3){
            for(int i=0; i<n; i++){
                cout << a[i] << " ";
            }
            cout << endl;  
            continue;
        }
        sort(a,a+n);
        int a1[n];
        int j = 0;
        int k = n-1;
        for(int i=0; i<n; i++){
            if(i%2 == 0){
                a1[i] = a[j];
                j++;
            }
            else{
                a1[i] = a[k];
                k--; 
            }
        }
        bool print = true;
        if((a1[n-1] >= a1[n-2] && a1[n-2] >= a1[n-3]) || (a1[n-1] <= a1[n-2] && a1[n-2] <= a1[n-3])){
            int temp = a1[n-1];
            a1[n-1] = a1[n-2];
            a1[n-2] = temp;
        }
        for(int i=0; i < n-2; i++){
            if(a1[i] >= a1[i+1] && a1[i+1] >= a1[i+2]){
                print = false;
                break;
            }
            if(a1[i] <= a1[i+1] && a1[i+1] <= a1[i+2]){
                print = false;
                break;
            }
        }
        if(print){
            for(int i=0; i<n; i++){
                cout << a1[i] << " ";
            }
            cout << endl;   
        }
        else{
            cout << -1 << endl;
        }
    }
}