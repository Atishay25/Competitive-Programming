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
#define o3(a, b, c) cout<<a<<" "<<b<<" "<<c<<"\n"

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

bool cmp_second(pll a, pll b){
    return a.ss < b.ss;
}

void solve(){

    ll n, x;
    cin>>n>>x;
    vpll v;
    ll val;
    loop0(i,n){
        cin>>val;
        v.pb(mp(i+1,val));
    }
    // THIS similar IDEA USED FOR 4 CASE GIVING TLE FOR SOME CASES HERE
    /*
    map<ll, pll> m;
    ll index;
    loop0(i,n){
            index = x - v[i];
            if(m.find(index) != m.end()){
                o3(m[index].ss + 1, m[index].ff + 1, i+1);
                return;
            }
        for(ll j = i - 1; j >= 0; j--){
            m[v[i] + v[j]] = mp(i,j);
        }
    }
    o1("IMPOSSIBLE");
    */

    // NEW APPROACH - sort and then separate a value and then find the other two sum using 2 pointer method 
    ll l, r, summ;
    sort(v.begin(), v.end(), cmp_second);
    loop0(i,n-2){
        l = i + 1;
        r = n - 1;
        while(l < r){
            summ = v[i].ss + v[l].ss + v[r].ss;
            if(summ < x){
                l++;
            }
            else if(summ > x){
                r--;
            }
            else{
                o3(v[i].ff, v[l].ff, v[r].ff);
                return;
            }
        }
    }
    o1("IMPOSSIBLE");
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    loop1(I,1){

        solve();

    }
}


