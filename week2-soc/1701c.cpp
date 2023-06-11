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

bool ok(vll freq, ll t, ll n){
    ll completed_tasks = 0, free = 0;
    loop1(i,n){
        if(t >= freq[i]){
            free += (t-freq[i])/2;
        }
        else{
            completed_tasks += (freq[i] - t);
        }
    }
    return completed_tasks > free;
}

void solve(){
    
    ll n, m;
    cin >> n >> m;
    vll a(m), freq(n+1,0);
    loop0(i,m){
        cin >> a[i];
        freq[a[i]]++;
    }
    ll l = 0, r = 2*m;
    //print_vector(freq);
    ll ans, mid;
    while(l <= r){
        mid = (l+r)/2;
        //cout << l  << " " << r << " ";
        if(ok(freq,mid,n)){
            l = mid + 1;
        }
        else{
            r = mid - 1;
            ans = mid;
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


