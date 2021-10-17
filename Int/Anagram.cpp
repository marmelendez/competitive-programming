#include <iostream>
using namespace std;

boolean isAnagram(string word1, string word2) {
    unordered_map<char, int> letters;
    for (int i = 0; i < word1.length(); i++) {
        letters.insert({word1[i], 1});
    }

    for (int i = 0; i < word2.length(); i++) {
        if (letters.at(word2[i]) == 1) {

        }
    }
}


int main() {

}