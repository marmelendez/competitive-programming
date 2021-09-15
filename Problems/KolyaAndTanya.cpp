#include <iostream>
using namespace std;

int main() {
    int n;
    long long   mod = 1000000007,
                c = 1,
                m = 1, 
                res;

    cin >> n;

    for (int i = 0; i < 3 * n; i++) {
        c *= 3;
        c %= mod;
    }

    for (int i = 0; i < n; i++) {
        m *= 7;
        m %= mod;
    }

    res = ((c - m) + mod) % mod;
    cout << res << endl;
}
