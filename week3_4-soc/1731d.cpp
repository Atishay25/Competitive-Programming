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
typedef vector<vector<ll>> vvll;

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

bool ok(vvll mat, ll n, ll m, ll mid){
    vvll pref_sum(n+1, vll(m+1));
    loop0(i,n){
        loop0(j,m){
            if(mat[i][j] < mid){
                mat[i][j] = 0;
            }
            else{
                mat[i][j] = 1;
            }
            pref_sum[i+1][j+1] = mat[i][j] + pref_sum[i][j+1] + pref_sum[i+1][j] - pref_sum[i][j];
        }
    }
    for(ll i = mid; i < n+1; i++){
        for(ll j = mid; j < m+1; j++){
            ll sum = pref_sum[i][j] - pref_sum[i][j - mid] - pref_sum[i - mid][j] + pref_sum[i - mid][j - mid];
            if (sum == mid * mid) return 1;
        }
    }
    return 0;
}

void solve(){
    
    ll n, m;
    cin >> n >> m;
    vvll mat(n, vll(m));
    loop0(i,n){
        loop0(j,m){
            cin >> mat[i][j];
        }
    }
    ll l = 1, r = min(m,n), ans;
    while(l <= r){
        ll mid = (l+r)/2;
        if(ok(mat, n, m, mid)){
            l = mid + 1;
            ans = mid;
        }
        else{
            r = mid - 1;
        }
    }
    o1(ans);
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


