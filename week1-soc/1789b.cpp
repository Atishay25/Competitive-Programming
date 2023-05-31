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
typedef vector<char> vc;
typedef vector<double> vd;
typedef vector<int64_t> vll;
typedef vector<string> vs;
typedef vector<long double> vld;
typedef vector<bool> vb;
typedef vector<vector<int>> vvi;
typedef vector<vector<int64_t>> vvll;

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

void precomp(){

    

}

void solve(){

    ll n;
    cin>>n;
    string s;
    cin >> s;
    vi v(n/2);
    ll k = 1;
    loop0(i,n/2){
        if(s[i] != s[n-1-i]){
            v[i] = k;
            if(k > 1){
                o1("NO");
                return;
            }
        }
        if(i > 0){
            if(v[i] != v[i-1] && v[i-1] == 1){
                k++;
            }
        }
       // o0(v[i]);
    }
    o1("YES");
    //ll ones = 0;
    //loop0(i,n/2 - 1){
    //    if(v[i] != v[i+1]){
    //        if(v[i] == 1){
    //            ones++;
    //        }
    //    }
    //}
    //if(v[n/2 -2] != v[n/2 - 1] && v[n/2 - 1] == 1){
    //    ones++;
    //}
    ////o1(ones);
    //if(ones < 2){
    //    o1("YES");
    //}
    //else{
    //    o1("NO");
    //}

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


