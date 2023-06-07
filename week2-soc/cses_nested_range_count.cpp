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

bool cmp(pll a, pll b){
    if(a.ff == b.ff){
        return a.ss > b.ss;
    }
    else return a.ff < b.ff;
}

void solve(){
    
    ll n;
    cin >> n;
    vpll r;
    ll a, b;
    loop0(i,n){
        cin >> a >> b;
        r.pb({a,b});
    }

    // TLE for some cases in this approach
    // vll c(n,0), d(n,0);
    // loop0(i, n-1){
    //     for(ll j = i+1; j < n; j++){
    //         //o2(r[i].ff - r[j].ff, r[j].ss - r[i].ss);
    //         if(r[i].ff <= r[j].ff && r[j].ss <= r[i].ss){
    //             c[i]++;
    //             d[j]++;
    //         }
    //         else if(r[j].ff <= r[i].ff && r[i].ss <= r[j].ss){
    //             c[j]++;
    //             d[i]++;
    //         }
    //     }
    // }
    // print_vector(c);
    // print_vector(d);
    sort(r.begin(), r.end(), cmp);
    loop0(i,n){
        cout << r[i].ff << " " << r[i].ss << endl;
    } 
    cout << endl;
    for(ll i = n-1; i >= 0; i--){
        
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // ll T;
    // cin>>T;
    // precomp();
    loop1(I,1){
        solve();
        // cout<<"Case #"<<I<<": "<<ans<<"\n";
    }
}


