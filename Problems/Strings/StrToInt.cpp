#include <iostream>

using namespace std;

// ASCII to int
long strToInt(string str) {
    long total = 0;

    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) {
            total *= 10;
            total += (str[i] - 48); //get value ascii
        }
    }

    if (str[0] == '-') {
        return -1 * total;
    }

    return total;
}


int main() {
    cout << strToInt("-123") << endl;

}