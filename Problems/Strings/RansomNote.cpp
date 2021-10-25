#include <iostream>
#include <unordered_map>
#include <stdexcept>  
using namespace std;

bool isRansomNote(string ransomNote, string magazine) {
  int indRan = 0, indMag = 0;
  unordered_map<char, int> letters;

  while (indRan < ransomNote.length() && indMag <= magazine.length()) {  
    try {
        if (letters.at(ransomNote[indRan])) { 
            letters.at(ransomNote[indRan]) -= 1;
            indRan++;
        } else {
            try {
                letters.at(magazine[indMag]) += 1;
            } catch(out_of_range& oor) {
                pair<char,int> character(magazine[indMag], 1);
                letters.insert(character); 
            }
            indMag++;
        }
    } catch(out_of_range& oor) {
        try {
            letters.at(magazine[indMag]) += 1;
        } catch(out_of_range& oor) {
            pair<char,int> character(magazine[indMag], 1);
            letters.insert(character); 
        }
        indMag++;
    }
  }

  if (indRan == ransomNote.length() || ransomNote.length() == 0) {
    return true;
  }
  return false;
}

int main() {
  string ransomNote = "gdas";
  string magazine = "abh jalmrno";
  cout << isRansomNote(ransomNote,magazine);
}




