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

    ll n, m;
    cin>>n>>m;
    vll k(n);
    loop0(i,n){cin>>k[i];}
    sort(k.begin(),k.end());
    loop0(j,m){
        ll a, b, c;
        cin >> a>>b>>c;
        if(c<=0){o1("NO");continue;}

        // have to check if there is a k such that b − sqrt(4ac) < k < b + sqrt(4ac)
        ll lg_slope_index = lower_bound(k.begin(), k.end(), b) - k.begin();    // the smallest slope greater than b
        //o2("lg",lg_slope_index); 
        if(lg_slope_index > 0){
            if((b-k[lg_slope_index-1])*(b-k[lg_slope_index-1]) - 4*a*c < 0){
                o1("YES");
                o1(k[lg_slope_index-1]);
                continue;
            }
        }
        if(lg_slope_index<n){
            if((b-k[lg_slope_index])*(b-k[lg_slope_index]) - 4*a*c < 0){
                o1("YES");
                o1(k[lg_slope_index]);
                continue;
            }
        }
        o1("NO");
    }
    //cout << "\n";
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
        //cout<<"Case #"<<I<<": "<<ans<<"\n";

    }
}


