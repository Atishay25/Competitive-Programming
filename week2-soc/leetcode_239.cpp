#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

typedef uint64_t ull;
typedef int64_t ll;
typedef vector<int> vi;
typedef vector<int64_t> vll;

#define loop0(i,n) for(ll i=0;i<n;i++)
#define o0(a) cout<<a<<" "

template<typename T>
void print_vector(vector<T> a){
    for(auto it:a){
        o0(it);
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin >> n;
    vi nums(n);
    loop0(i,n){cin >> nums[i];}
    cin >> k;
    int max_index;
    int max_k = nums[0];
    vector<int> result;
    for(int i = 0; i < k; i++){
        if(nums[i] > max_k){
            max_k = nums[i];
            max_index = i;
        }
    }
    result.push_back(max_k);
    for(int i = 0; i < nums.size()-k; i++){
        if(max_index != i){
            if(max_k < nums[i+k]){
                max_k = nums[i+k];
                max_index = i + k;
            }
        }
        else{
            int maxu = nums[i+1];
            max_index = i+1;
            for(int j = i+2; j < i+1+k; j++){
                if(nums[j] > maxu){
                    maxu = nums[j];
                    max_index = j;
                }
            }
            max_k = maxu;
        }
        //cout << max_index  << " " << max_k << endl;
        result.push_back(max_k);
    }
    print_vector(result);
}