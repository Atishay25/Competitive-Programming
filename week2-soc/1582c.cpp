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

void solve(){
    
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vll erased_v(26,-1);
    loop0(i,26){
        ll l = 0, r = n-1;
        ll erased = 0;
        bool poss = true;
        while(l < r){
            if(s[l] != s[r]){
                if(int(s[l] - 'a') == i){
                    erased++;
                    l++;
                }
                else if(int(s[r] - 'a') == i){
                    erased++;
                    r--;
                }
                else{
                    poss = false;
                    break;
                }
            }
            else{
                l++;
                r--;
            }
        }
        erased_v[i] = erased;
        if(!poss){
            erased_v[i] = n+1;
        }
    }
    ll ans = *min_element(erased_v.begin(), erased_v.end());
    if(ans == n+1){
        ans = -1;
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


