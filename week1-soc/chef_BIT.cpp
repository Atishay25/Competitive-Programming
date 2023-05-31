#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <bitset>

using namespace std;

typedef long double ld;
typedef uint64_t ull;
typedef int64_t ll;

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
#define o3(a, b, c) cout<<a<<" "<<b<<" "<<c<<"\n"
#define o4(a, b, c, d) cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n"
#define random mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define reach cout<<"Reached!"<<endl;


void solve(){

    int n;
    cin>>n;
    string s;
    ll ones = 0;
    int ones_data[1000];
    loop0(i,1000){
        ones_data[i] = -1;
    }
    loop1(i,n){
        if(ones_data[i-1] != -1){
            ones += ones_data[i-1];
            continue;
        }
        s = bitset<10> (i).to_string();
        int cnt = 0;
        for(auto it:s){
            if(it == '1'){
                cnt++;
            }
        }
        ones_data[i-1] = cnt;
        ones += cnt;
    }
    o1(ones);

}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;

    cin>>T;

    loop1(I,T){

        solve();
        //cout<<"Case #"<<I<<": "<<ans<<"\n";

    }
}


