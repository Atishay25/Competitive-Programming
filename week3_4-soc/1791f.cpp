#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
//  
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

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
#define MOD 1000000007          // 10^9 + 7
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

// Observation - This operation can be done atmost 3 times

void solve(){
    
    ll n, q;
    cin >> n >> q;
    vll a(n+1,0);
    set<ll> active;
    loop1(i,n){
        cin >> a[i];
        if(a[i] > 9){
            active.insert(i);   // storing active indices in this set, not the values!
        }
    }
    while(q--){
        ll type;
        cin >> type;
        if(type == 1){
            ll l, r;
            cin >> l >> r;
            while(active.size() > 0){
                auto it = active.lower_bound(l);
                if(it == active.end() || *it > r){
                    break;
                }
                ll nn = a[*it];
                ll next = 0;
                while(nn) {
                    next += nn % 10;
                    nn /= 10;
                }
                a[*it] = next;
                ll next_ind = *it + 1;
                if(a[*it] < 10){
                    active.erase(it);
                }
                l = next_ind;
            }
        }
        else{
            ll ind;
            cin >> ind;
            o1(a[ind]);
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
        // cout<<"Case #"<<I<<": "<<ans<<"\n";
    }
}


