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

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, q;
    cin>>n>>q;
    vll a(n);
    vll dp(n+1,0);
    ll cnt = 0;
    loop1(i,n){
        cin >> a[i-1];
        if(i == 1 || i == 2){
            dp[i] = i;
        }
        else{
            if(a[i-1] > a[i-2]){
                dp[i] = dp[i-1] + 1;
                cnt = 0;
            }
            else{
                if(cnt == 1){
                    dp[i] = dp[i-1];
                }
                else{
                    cnt++;
                    dp[i] = dp[i-1] + 1;
                }
            }
        }
    }
    //print_vector(dp);
    ll l, r;
    ll ans;
    while(q--){
        cin >> l >> r;
        if(r-l+1 < 3){
            o1(r-l+1);
        }
        else{
            ans = dp[r] - dp[l-1];
            if(dp[l+1] == dp[l-1]){
                ans++;
                ans++;
            }
            else if(dp[l] == dp[l-1] || dp[l] == dp[l+1]){
                ans++;
            }
            o1(ans);
        }
    }
}


