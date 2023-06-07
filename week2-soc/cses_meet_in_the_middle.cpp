#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

typedef long double ld;
typedef uint64_t ull;
typedef int64_t ll;
typedef vector<int> vi;
typedef vector<int64_t> vll;

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

template<typename T>
void print_array(T *a, ll sz){
    cout << "\n";
    loop0(i,sz){
        o0(a[i]);
    }
    cout << "\n";
}

template<typename T>
void print_vector(vector<T> a){
    for(auto it:a){
        o0(it);
    }
    cout << "\n";
}

void precomp(){

    

}


void solve(){

    ll n, x;
    cin>>n>>x;
    ll half_n = n/2, other_half = n - half_n;
    vll a(half_n), b(other_half);
    loop0(i,half_n){cin>>a[i];}
    loop0(i,other_half){cin>>b[i];}
    ll summ;
    vector<ll> s_a, s_b;
    for (int c = 0; c < (1<<half_n); c++) {
        //vector<ll> subset;
        summ = 0;
        for (int i = 0; i < half_n; i++) {
            if (c&(1<<i)){
                summ += a[i];
            }
        }
        s_a.pb(summ);
    }
    for (int c = 0; c < (1<<other_half); c++) {
        //vector<ll> subset;
        summ = 0;
        for (int i = 0; i < other_half; i++) {
            if (c&(1<<i)){
                summ += b[i];
            }
        }
        s_b.pb(summ);
    }
    ll ans = 0;
    sort(s_b.begin(), s_b.end());
    for(ll it: s_a){
        ans += upper_bound(s_b.begin(), s_b.end(), x - it) - lower_bound(s_b.begin(), s_b.end(), x - it);
    }
    o1(ans);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //ll T;

    //cin>>T;

    //precomp();

    loop1(I,1){

        solve();
        //cout<<"Case #"<<I<<": "<<ans<<"\n";

    }
}


