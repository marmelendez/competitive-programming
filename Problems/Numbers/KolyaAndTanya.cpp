#include <iostream>
using namespace std;

int solution(int n, long long  c, long long m) {
    long long mod = 1000000007;

    // 3 ^3n
    for (int i = 0; i < 3 * n; i++) {
        c *= 3;
        c %= mod;
    }

    // 7 ^ n
    for (int i = 0; i < n; i++) {
        m *= 7;
        m %= mod;
    }

    return ((c - m) + mod) % mod;
}

int main() {
    int n;
    long long   c = 1,
                m = 1;

    cin >> n;

    cout << solution(n,c,m) << endl;
}


/*
1
20

2
680
*/
