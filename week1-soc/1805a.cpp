#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>


using namespace std;

typedef long double ld;
typedef uint64_t ull;
typedef int64_t ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<double> vd;
typedef vector<int64_t> vll;
typedef vector<string> vs;
typedef vector<long double> vld;
typedef vector<bool> vb;
typedef vector<vector<int>> vvi;
typedef vector<vector<int64_t>> vvll;

typedef pair<int,int> pii;
typedef pair<int64_t,int64_t> pll;
typedef vector<pair<int,int>> vpi;
typedef vector<pair<ll,ll>> vpll;

#define pb push_back
#define pob pop_back()
#define sz size()
#define ff first
#define ss second
#define mp make_pair
#define PI 3.14159265359
#define INF 1500000000000000000
#define NINF -1500000000000000000
#define loop0(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
#define o0(a) cout<<a<<" "
#define o1(a) cout<<a<<"\n"
#define o2(a, b) cout<<a<<" "<<b<<"\n"
#define o3(a, b, c) cout<<a<<" "<<b<<" "<<c<<"\n"
#define o4(a, b, c, d) cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n"
#define random mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define reach cout<<"Reached!"<<endl;

template<typename T>
T max3(T a,T b,T c){
    return max(a,max(b,c));
}

template<typename T>
T min3(T a,T b,T c){
    return min(a,min(b,c));
}


void precomp(){

    

}

/*
Note that (a1⊕x)⊕(a2⊕x)⊕...equals a1⊕a2⊕…⊕an if n
is even, or a1⊕a2⊕…⊕an⊕x if n is odd. 
Then, if the length of the array is odd, you must print ⊕
of the whole array. And if the length is even, we can't 
change the value of the expression with our operation. 
It turns out that if ⊕ of the whole array is 0, we can 
output any number, but otherwise there is no answer.
*/

void solve(){

    int n;
    cin>>n;
    vi a(n);
    ll original_xor;
    loop0(i,n){
        cin >> a[i];
        if(i == 0){
            original_xor = a[i];
        }
        else{
            original_xor ^= a[i];
        }
    }
    if(n%2){
        o1(original_xor);
    }
    else{
        if(original_xor == 0){
            o1(2);      // I chose that any number to be 2
        }
        else{
            o1(-1);
        }
    }
}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;

    cin>>T;

    precomp();

    loop1(I,T){

        solve();
        //cout<<"Case #"<<I<<": "<<ans<<"\n";

    }
}


