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

void solve(){
    
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if(n%2 != 0){
        o1(-1);
        return;
    }
    map<char,ll> f;
    map<char, ll> same;
    for(auto it : s){
        f[it]++;
        if(f[it] > n/2){
            o1(-1);
            return;
        }
    }
    loop0(i,n/2){
        if(s[i] == s[n-i-1]){
            same[s[i]]++;
        }
    }
    if(same.size() == 0){
        o1(0);
        return;
    }
    ll ans = 0;
    multiset<ll> cng;
    for(auto it : same){
        cng.insert(it.second);
    }
    while(cng.size() > 1){
        auto first = cng.begin();
        ll dec1 = *(first) - 1;
        auto last = cng.end();
        last--;
        ll dec2 = *(last) - 1;
        cng.erase(first);
        cng.erase(last);
        if(dec1 > 0){
            cng.insert(dec1);
        }
        if(dec2 > 0){
            cng.insert(dec2);
        }
        ans++;
    }
    if(cng.size() == 1){
        ans += *(cng.begin());
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


