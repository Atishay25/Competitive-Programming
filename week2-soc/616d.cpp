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
    cout << "\n";
    for(auto it:a){
        o0(it);
    }
    cout << "\n";
}

void precomp(){

    

}

void solve(){

    ll n, k;
    cin>>n>>k;
    vll a(n);
    map<ll,ll> freq;
    loop0(i,n){
        cin >> a[i];
        freq[a[i]] = 0;
    }
    ll l = 1, r = 1, opt_l, opt_r, diff = 0, max_len = 0;
    while(r <= n){
        freq[a[r-1]]++;
        if(freq[a[r-1]] == 1){
            diff++;
        }
        while(diff > k){
            freq[a[l-1]]--;
            if(freq[a[l-1]] == 0){
                diff--;
            }
            l++;
        }
        if(r-l+1 > max_len){
            max_len = r-l+1;
            opt_r = r;
            opt_l = l;
        }
        r++;
    }
    o2(opt_l,opt_r);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //ll T;
//
    //cin>>T;
//
    //precomp();

    loop1(I,1){

        solve();
        //cout<<"Case #"<<I<<": "<<ans<<"\n";

    }
}


