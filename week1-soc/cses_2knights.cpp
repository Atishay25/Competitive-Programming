#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>


using namespace std;

typedef int64_t ll;

#define o0(a) cout<<a<<" "
#define o1(a) cout<<a<<"\n"



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;

    cin>>T;

    for(ll i = 1; i <= T; i++){
        o1(((i*i)*(i*i - 1)/2) - 4*(i-1)*(i-2));
    }
}


