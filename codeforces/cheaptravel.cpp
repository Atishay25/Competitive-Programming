#include<iostream>
using namespace std;

// https://codeforces.com/problemset/problem/466/A

int main(){
    int n , a, b, m;
    cin >> n >> m >> a >> b;
    int specialrides =  0, ridecost;
    int min = n*a;
    if(b < a && n%m != 0){
        if(n >= m) min = (n/m + 1)*b;
        else min = n*b;
    }
    else{
        while(specialrides <= n/m + 1){
            if(n-m*specialrides >= 0)ridecost = specialrides*b + (n-m*specialrides)*a;
            else ridecost = b*specialrides;
            if(ridecost <= min) min = ridecost;
            specialrides++;
        }
    }
    cout << min << endl;
}