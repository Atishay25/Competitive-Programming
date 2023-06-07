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
#define o4(a, b, c, d) cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n"

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

/*
// BRUTE FORCE ATTEMPT -> GOT TLE FOR MOST CASES !
void combinationUtil(vll arr, int n, int r, int index, int data[], int i, ll x){
    if (index == r) {
        ll summ = 0;
        for (int j = 0; j < r; j++){
            summ += arr[data[j]];
        }
        if(summ == x){
            loop0(i,r){
                cout << data[i] + 1 << " "; 
            }
            cout << "\n";
            exit(0);
        }
        return;
    }
    if (i >= n)
        return;
    data[index] = i;
    combinationUtil(arr, n, r, index + 1, data, i + 1, x);
    combinationUtil(arr, n, r, index, data, i + 1, x);
}

void printCombination(vll arr, int n, int r, ll x){
    int data[r];
    combinationUtil(arr, n, r, 0, data, 0, x);
    return;
}
*/

// IDEA - store index {i,j} pair mapped with their sum v[i] + v[j]
// then search for all pairs {m,n} if x - v[m] - v[n] is present in the map already
void solve(){

    ll n, x;
    cin>>n>>x;
    vll v(n);
    loop0(i,n){cin>>v[i];}
    map<ll, pll> m;
    ll index;
    loop0(i,n-1){
        for(ll j = i + 1; j < n; j++){
            index = x - v[i] - v[j];
            if(m.find(index) != m.end()){
                o4(m[index].ss + 1, m[index].ff + 1, j+1, i+1);
                return;
            }
        }
        for(ll j = i - 1; j >= 0; j--){
            m[v[i] + v[j]] = mp(i,j);
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


