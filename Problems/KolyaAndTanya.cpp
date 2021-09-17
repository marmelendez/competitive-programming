#include <iostream>
using namespace std;

int solution(int n, long long  c, long long m) {
    long long   mod = 1000000007;
    for (int i = 0; i < 3 * n; i++) {
        c *= 3;
        c %= mod;
    }

    for (int i = 0; i < n; i++) {
        m *= 7;
        m %= mod;
    }

    return ((c - m) + mod) % mod;
}

int main() {
    int n;
    long long   c = 1,
                m = 1, 
                res;

    cin >> n;

    cout << solution(n,c,m) << endl;
}
