#include <iostream>
#include <string>
#include <cmath>

using namespace std;
// Write a program to verify wheter the word input by the user is a palindrome 
// palindrome: is a word, phrase, or sentence reads the same backward or forward
// Test case
// 1. Empty string -> true
// 2. "hello" -> false
// 3. "atoyota" -> true
// 4. "aToyUtA" -> true

bool isPalindrome(string str) {
    int center = floor(str.length()/2.0),
        j = str.length() - 1;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for (int i = 0; i < center; i++) {
        if (str[i] != str[j]) {
            return false;
        }
        j--;
    }
    return true;
}

bool isPalindrome2(string str) {
    transform(str.begin(), str.end(),str.begin(), ::tolower);
    string str2 = str;
    reverse(str.begin(),str.end());

    return str2.compare(str) == 0;
}

int main() {
    cout << isPalindrome2("") << endl;
    cout << isPalindrome2("hello") << endl;
    cout << isPalindrome2("atoyota") << endl;
    cout << isPalindrome2("aToyOtA") << endl;
}