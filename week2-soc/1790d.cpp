#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <map>
#include <set>

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
    vll a(n);
    map<ll,ll> freq;
    set<ll> s;
    loop0(i,n){
        cin >> a[i];
        freq[a[i]] = 0;
        s.insert(a[i]);
        s.insert(a[i] + 1);
    }
    sort(a.begin(),a.end());
    loop0(i,n){
        freq[a[i]]++;
    }
    ll prev = 0, ans = 0; 
    for(auto it:s){
        ll curr = freq[it];
        if(curr - prev > 0){
            ans += curr - prev;
        }
        prev = curr;
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


