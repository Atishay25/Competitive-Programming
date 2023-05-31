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
#define random mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define reach cout<<"Reached!"<<endl;


void precomp(){

    

}

void solve(){
    ll n;
    cin>>n;
    vll a(n);
    ll l = 0, r = n-1;
    loop0(i,n){
        cin >> a[i];
    }
    ll min_elem = 1, max_elem = n;
    while(l != r){
        if(a[l] == min_elem){
            l++;
            min_elem++;
        }
        else if(a[l] == max_elem){
            l++;
            max_elem--;
        }
        else if(a[r] == min_elem){
            r--;
            min_elem++;
        }
        else if(a[r] == max_elem){
            r--;
            max_elem--;
        }
        else{
            o2(l+1,r+1);
            return;
        }
    }
    o1(-1);
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


