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
    vll a(n), b(n);
    map<ll,ll> f;
    bool dohe = false;
    loop0(i,n){
        cin >> b[i];
        a[i] = b[i];
        f[a[i]]++;
        if(f[a[i]] > 1 && !dohe){
            dohe = true;
        }
    }
    sort(a.begin(), a.end());
    if(a[0] != 0){
        o1("YES");
        return;
    }
    ll m = 0;
    loop0(i,n){
        if(a[i] == m){
            m++;
        }
    }
    ll cnt = 0;
    ll start, end;
    loop0(i,n){
        if(b[i] == m+1){
            if(cnt == 0){
                start = i;
            }        
            if(i == 0){
                cnt++;
            }
            else if(b[i] != b[i-1]){
                cnt++;
            }
            end = i;
        }
    }
    if(find(b.begin(), b.end(),m+1) == b.end()){
        start = -1;
        end = -1;
    }
    if(start != -1){
        if(cnt == 1){
            o1("YES");
            return;
        }
        else{
            vll c;
            loop0(i,n){
                if(i < start && i > end){
                    c.pb(b[i]);
                }
            }
            sort(c.begin(),c.end());
            ll new_mex = 0;
            loop0(i,c.size()){
                if(c[i] == new_mex){
                    new_mex++;
                }
            }
            if(new_mex == m){
                o1("YES");
            }
            else{
                o1("NO");
            }
        }
    }
    else{
        if(dohe){
            o1("YES");
            return;
        }
        if(a[n-1] > m+1){
            o1("YES");
        }
        else{
            o1("NO");
        }
    }
    //cout << start << " " << end <<  " " << cnt << "\n";
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


