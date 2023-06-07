#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
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
    
    ll n, q;
    cin >> n >> q;
    vll r(n+1,0), c(n+1,0);
    ll t;
    ll x1, y1, x2, y2;
    set<ll> fr, fc;
    loop1(i,n){
        fr.insert(i);
        fc.insert(i);
    }
    loop0(lmao,q){
        cin >> t;
        if(t == 1){
            cin >> x1 >> y1;
            r[x1]++;
            c[y1]++;
            fr.erase(x1);
            fc.erase(y1);
        }
        else if(t == 2){
            cin >> x2 >> y2;
            r[x2]--;
            c[y2]--;
            if(!r[x2]){
                fr.insert(x2);
            }
            if(!c[y2]){
                fc.insert(y2);
            }
        }   
        else{
            cin >> x1 >> y1 >> x2 >> y2;
            if(x2 < x1){
                swap(x2, x1);
            }
            if(y2 < y1){
                swap(y2, y1);
            }
            //auto lowerr = fr.lower_bound(x2);
            //auto upperr = fr.upper_bound(x1-1);
            //auto lowerc = fc.lower_bound(y2);
            //auto upperc = fc.upper_bound(y1-1);
            //cout << endl;
            //cout << *upperr << " " << *lowerr << endl;
            //cout << *upperc << " " << *lowerc << endl;
            //for(auto it : fr){
            //    cout << it << " ";
            //}
            //cout << endl;
            //for(auto it : fc){
            //    cout << it << " ";
            //}
            //cout << endl;
            //cout << (*lowerr == x2) << " " <<  (*upperr == x1) << " "  <<   (*lowerc == y2) << " " <<  (*upperc == y1) << endl;
            if(fr.empty() || fc.empty() || *fr.rbegin() < x1 || *fr.begin() > x2  || *fc.rbegin() < y1  || *fc.begin() > y2 || *fr.lower_bound(x1) > x2  || *fc.lower_bound(y1) > y2){
                o1("YES");
            }
            // else if((*lowerr == x2 || *upperr == x1) && (*lowerc == y2 || *upperc == y1)){
            //     o1("NO");
            // }
            else{
                o1("NO");
            }
            //bool flag1 = true;
 //
            //auto itr1 = fr.lower_bound(x1);
            //if(itr1!=fr.end() and *itr1 <= x2){
            //    flag1 = false;
            //}
 //
            //bool flag2 = true;
 //
            //auto itr2 = fc.lower_bound(y1);
            //if(itr2!=fc.end() and *itr2 <= y2){
            //    flag2 = false;
            //}
 //
            //if(flag1 || flag2){
            //    cout<<"YES"<<endl;
            //}
            //else{
            //    cout<<"NO"<<endl;
            //}
        }
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //ll T;
    //cin>>T;
    //precomp();
    loop1(I,1){
        solve();
        // cout<<"Case #"<<I<<": "<<ans<<"\n";
    }
}


