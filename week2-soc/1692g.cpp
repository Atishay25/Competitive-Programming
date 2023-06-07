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

    ll n, k;
    cin>>n>>k;
    vll a(n);
    loop0(i,n){cin >> a[i];}
    ll ans = 0;

    // THIS APPROACH GOT TLE AT TEST CASE #38
    // bool sort_hai = true;
    // loop0(i,k){
    //     if(a[i] >= a[i+1] * 2){
    //         sort_hai = false;
    //         break;
    //     }
    // }
    // if(sort_hai){
    //     ans++;
    // }
    // loop1(i,n-k-1){
    //     if(sort_hai){
    //         if(a[i+k-1] < a[i+k] * 2){
    //             //for(ll j = i; j < i + k + 1; j++){cout << a[j] << " ";} cout << endl;
    //             ans++;
    //         }
    //         else{
    //             sort_hai = false;
    //         }
    //     }
    //     else{
    //         sort_hai = true;
    //         for(ll j = i; j < i + k; j++){
    //             if(a[j] >= a[j+1] * 2){
    //                 sort_hai = false;
    //                 break;
    //             }
    //         }
    //         if(sort_hai){
    //             //for(ll j = i; j < i + k + 1; j++){cout << a[j] << " ";} cout << endl;
    //             ans++;
    //         }
    //     }
    // }

    bool correct[n-1];
    loop0(i,n-1){
        if(a[i] < a[i+1] * 2){
            correct[i] = 1;
        }
        else{
            correct[i] = 0;
        }
    }
    // check if sum = k with sliding window now
    ll sum_k = 0;
    loop0(i,k){
        sum_k += correct[i];
    }
    if(sum_k == k){ans++;}
    for(ll i = k; i < n - 1; i++){
        sum_k += correct[i];
        sum_k -= correct[i-k];
        if(sum_k == k){ans++;}
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
        //cout<<"Case #"<<I<<": "<<ans<<"\n";

    }
}


