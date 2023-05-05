#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
    int A, B, C;
    cin >> A >> B >> C;

    // Calculate (B-A) in binary representation
    bitset<32> diff(B-A);

    // Find the number of 0's in (B-A)
    int num_zeros = diff.count() - 1; // we subtract 1 because we only care about the zeros in the lower C bits

    // Calculate the number of values of X that maximize F(X, A, B)
    int num_max_values = (1 << num_zeros);

    // Print the result
    cout << "The number of values of X that maximize F(X, A, B) is " << num_max_values << endl;
    }
    return 0;
}
