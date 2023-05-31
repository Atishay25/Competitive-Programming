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

void solve(){

    ll n;
    cin>>n;
    vll small(n);
    vll big(n);
    loop0(i,n){
        small[i] = i+1;
        big[i] = 2*n - i;
    }
    // loop0(i,n){
    //     o0(small[i]);
    // }
    // cout << "\n";
    // loop0(i,n){
    //     o0(big[i]);
    // }
    // cout << "\n";
    ll cnt = 0;
    ll a[2][n];
    loop0(i,n){
        if(cnt%2 == 0){
            a[0][i] = big[i];
            a[1][i] = small[i];
        }
        else{
            a[0][i] = small[i];
            a[1][i] = big[i];
        }
        cnt++;
    }
    ll tmp;
    tmp = a[1][1];
    a[1][1] = a[1][n-1];
    a[1][n-1] = tmp;
    loop0(i,2){
        loop0(j,n){
            o0(a[i][j]);
        }
        cout << "\n";
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


