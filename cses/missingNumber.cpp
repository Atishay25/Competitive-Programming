// https://cses.fi/problemset/task/1083/

#include<iostream>
using namespace std;
 
int main() {
    long long int n;
    cin >> n;	
    long long int nums[n-1];
    long long int sum = 0, total = n*(n+1)/2;
    for(int i = 0; i < n-1; i++){
    	cin >> nums[i];
        sum += nums[i];
    }
    cout << total - sum;
}