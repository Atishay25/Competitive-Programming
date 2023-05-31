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
#define PI 3.14159265359
#define INF 1500000000000000000
#define NINF -1500000000000000000
#define loop0(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
#define o0(a) cout<<a<<" "
#define o1(a) cout<<a<<"\n"
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

void solve(){

    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll x_diff = c-a;
    ll y_diff = d-b;
    //o2(x_diff, y_diff);
    if(y_diff < 0 || x_diff > y_diff){
        o1(-1);
        return;
    }
    // weight of up = 2, l = 1, dl = 3, dr = 1
    if(x_diff <= 0){
        ll l = -x_diff;
        ll up = y_diff;
        o1(l + 2*up);
        return;
    }
    else{
        ll dr = x_diff;
        o1(dr + 2*(y_diff-x_diff));
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


