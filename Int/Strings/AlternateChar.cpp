#include <iostream>
#include <algorithm>

using namespace std;

// Program to convert every alternate character of a string into uppercase
// Test case
// VISWANATH -> ViSwAnAtH

void alternateChar(string& str) {
    for (int i = 0; i < str.length(); i++) {
        if (i%2 == 0){
            //uppercase
            str[i] = toupper(str[i]);
        } else {
            //lowercase
            str[i] = tolower(str[i]);
        }
    }
}

int main() {
    string str1 ("VISWANATH");
    alternateChar(str1);
    cout << str1 << endl;
}