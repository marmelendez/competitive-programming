#include <iostream>
#include <cmath>

using namespace std;

// Swapping
// O(1) space complexity
// O(n/2) -> O(n) time complexity
string reverseStr(string str) {
    int length = str.length(),
        center = floor(length/2.0);
    char aux;
    
    for (int i = 0; i < center; i++) {
        aux = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = aux;
    }

    return str;
}


int main() {
    cout << reverseStr("mar") << endl;
    cout << reverseStr("mari") << endl;
    cout << reverseStr("marib") << endl;
}