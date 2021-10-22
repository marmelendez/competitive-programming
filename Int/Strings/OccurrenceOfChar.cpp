#include <iostream>

using namespace std;

// Print position of every occurrence of a character in a string
// TEST CASES
// 1. "Good day string! today is beautiful!", 'a' -> 6, 20, 28

void printIndexOfOccurrence(string str, char character) {
    int startIndex = 0;
    startIndex = str.find(character, startIndex);

    while (startIndex != string::npos) {
        cout << startIndex << endl;
        startIndex++;
        startIndex = str.find(character, startIndex);
    }
}

int main() {
    string str ("Good day string! today is beautiful!");
    char character ('a');
    printIndexOfOccurrence(str, character);

}