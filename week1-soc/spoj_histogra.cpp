#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <stack>


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

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(true){
        ll n, max_area = 0, top_index, curr_area;
        cin >> n;
        if(n == 0){
            break;
        }
        vll h(n);
        loop0(i,n){
            cin >> h[i];
        }
        stack<ll> s;
        for(ll i = 0; i < n; i++){
            if(s.empty() || h[s.top()] <= h[i]){
                s.push(i);
            }
            else{
                top_index = s.top();
                s.pop();
                if(s.empty()){
                    curr_area = h[top_index] * i;
                }
                else{
                    curr_area = h[top_index] * (i - s.top() - 1);
                }
                if(curr_area > max_area){
                    max_area = curr_area;
                }
                i--;
            }
            //o2(i,max_area);
        }
        while(!s.empty()){
            top_index = s.top();
            s.pop();
            if(s.empty()){
                curr_area = h[top_index] * n;
            }
            else{
                curr_area = h[top_index] * (n - s.top() - 1);
            }
            if(curr_area > max_area){
                max_area = curr_area;
            }
            //o2(n,max_area);
        }
        o1(max_area);
    }
}


