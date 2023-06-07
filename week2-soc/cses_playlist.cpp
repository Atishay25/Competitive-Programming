#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <map>

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
#define o3(a, b, c) cout<<a<<" "<<b<<" " << c << "\n"

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

    ll n;
    cin>>n;
    vll v(n+1);
    map<ll,ll> f;
    loop1(i,n){
        cin >> v[i];
        f[v[i]] = 0;
    }
    ll l = 1, r = 1;
    ll max_ans = 0;
    ll ans = 0;
    while(r < n+1){
        if(f[v[r]] == 0){
            ans++;
            f[v[r]] = 1;
            max_ans = max(max_ans,ans);
        }
        else{
            while(v[l] != v[r]){
                f[v[l]] = 0;
                l++;
            }
            ans = r-l;
            l++;
        }
        //if(r-l+1 > diff){
        //    diff = r-l+1;
        //}
        //o2(l,r);
        r++;
    }
    o1(max_ans);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //ll T;

    //cin>>T;

    loop1(I,1){

        solve();
        //cout<<"Case #"<<I<<": "<<ans<<"\n";

    }
}


