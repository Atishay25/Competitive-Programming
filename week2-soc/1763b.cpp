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

bool cmp(pll a, pll b){
    return a.ff < b.ff;
}

void solve(){

    ll n, k, p_i;
    cin>>n>>k;
    vpll monster;
    vll h(n);
    loop0(i,n){
        cin>>h[i];
    }
    loop0(i,n){
        cin >> p_i;
        monster.pb({h[i], p_i});
    }
    sort(monster.begin(),monster.end(), cmp);
    sort(h.begin(),h.end());
    for(ll i = n-2; i >= 0; i--){
        monster[i].ss = min(monster[i].ss, monster[i+1].ss);
    }
    ll inc = 0;
    while(1){
        ll index = upper_bound(h.begin(), h.end(),k+inc) - h.begin();
        //ll minu = monster[index].ss;
        //for(ll i = index; i < n; i++){
        //   // h[i] -= k;
        //    if(minu > monster[i].ss){
        //        minu = monster[i].ss;
        //    }
        //}
        if(k <= 0){
            o1("NO");
            break;
        }
        else if(index == n){
            o1("YES");
            break;
        }
        inc += k;
        k -= monster[index].ss;
    //loop0(i,n){
    //    h[i] = monster[i].ff;
    //    cout << monster[i].ff << " " << monster[i].ss << endl;
    //}
    //cout <<  k << endl;
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


