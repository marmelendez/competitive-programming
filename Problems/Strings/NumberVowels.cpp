#include <iostream>
#include <string>

using namespace std;

// Write a proggram that tells the user the number of vowels in a sentence 
// Test case
// 1. empty "" -> 0
// 2. "hello how are you i am fine?" -> 11
// 3. "txt nt vwls" -> 0
// 3. "hEllo IaM MAribeL and yoU" -> 10 

bool isVowel(char character) {
    if (character == 'a' || 
        character == 'e' || 
        character == 'i' || 
        character == 'o' || 
        character == 'u') {
            return true;
        }
    return false;
}

int getNumberOfVowels(string sentence) {
    int vowels = 0;
    transform(sentence.begin(),sentence.end(), sentence.begin(), ::tolower);

    for (int i = 0; i < sentence.length(); i++) {
        if (isVowel(sentence[i])) {
            vowels ++;
        }
    }
    return vowels;
}

int main() {
    cout << getNumberOfVowels("") <<endl;
    cout << getNumberOfVowels("hello how are you i am fine?") <<endl;
    cout << getNumberOfVowels("txt nt vwls") <<endl;
    cout << getNumberOfVowels("hEllo IaM MAribeL and yoU") <<endl;
}