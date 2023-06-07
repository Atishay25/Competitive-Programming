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
    
    ll n, q;
    cin >> n >> q;
    ll h_i, w_i;
    ll prefix_area[1001][1001];
    loop0(i,1001){
        loop0(j,1001){
            prefix_area[i][j] = 0;
        }
    }
    loop0(i,n){
        cin >> h_i >> w_i;
        prefix_area[h_i][w_i] += h_i*w_i;
    }
    loop0(i,1001){
        loop0(j,1000){
            prefix_area[i][j+1] += prefix_area[i][j];
        }
    }
    loop0(j,1001){
        loop0(i,1000){
            prefix_area[i+1][j] += prefix_area[i][j];
        }
    }
    ll hs, ws, hb, wb;
    loop0(i,q){
        cin >> hs >> ws >> hb >> wb;
        o1(prefix_area[hb-1][wb-1] - prefix_area[hb-1][ws] - prefix_area[hs][wb-1] + prefix_area[hs][ws]);
    }
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


