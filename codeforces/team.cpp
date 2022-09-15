#include <iostream>
using namespace std;

// https://codeforces.com/contest/231/problem/A

int main(){
	int n, p1, p2, p3;
	cin >> n;
	int solve[n];
	int solution = 0;
	for(int i = 0; i < n; i++){
	        cin >> p1 >> p2 >> p3;
		solve[i] = p1 + p2 + p3;
	}
	for(int i = 0; i < n; i++){
		if(solve[i] >= 2) solution++; 
	}
	cout << solution << endl;
}	
