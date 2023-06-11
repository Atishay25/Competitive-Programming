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

bool ok(vll a, vll b, ll mid, ll k, ll n){
    ll aa;
    ll used = 0;
    loop0(i,n){
        aa = a[i]*mid;
        if(aa > b[i]){
            used += aa - b[i];
            if(used > k){
                //cout << used << " " << mid << endl;
                return false;
            }
        }
    }
    //cout << used << " " << mid << endl;
    return used <= k;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, k;
    cin >> n >> k;
    vll a(n), b(n);
    loop0(i,n){
        cin >> a[i];
    }
    ll l = 0, r; 
    loop0(i,n){
        cin >> b[i];
        if(i == 0){
            r = (b[i]/a[i])*k;
        }
        if(k*(b[i]/a[i]) > r){
            r = (b[i]/a[i])*k;
        }
    }
    ll yy = 1e9;
    r = max(yy, r);
    ll ans, mid;
    while(l <= r){
        mid = (l+r)/2;
        //cout << l  << " " << r << " ";
        if(ok(a,b,mid,k, n)){
            l = mid + 1;
            ans = mid;
        }
        else{
            r = mid - 1;
        }
    }
    o1(ans);
}


