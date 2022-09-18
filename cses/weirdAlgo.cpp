// https://cses.fi/problemset/task/1068

#include<iostream>
using namespace std;
 
void weird(long long int n)
{
	cout << n << " ";
	if(n%2 && n!=1) weird(n*3 + 1);
	else if(n == 1) return;
	else weird(n/2);
}
 
int main(int argc, char *argv[])
{
	long long int n;
	cin >> n;
	weird(n);	
}