#include <iostream>
using namespace std;

// Given two strings s and t of length N, find the maximum number of possible matching pairs in strings s and t after swapping exactly two characters within s.
// A swap is switching s[i] and s[j], where s[i] and s[j] denotes the character that is present at the ith and jth index of s, respectively. The matching pairs of the two strings are defined as the number of indices for which s[i] and t[i] are equal.
// Note: This means you must swap two characters at different indices.


int matchingPairs(string s, string t) {
  if (s.compare(t) == 0) {
    return s.length() - 2;
  } 
  
  unordered_set<char> notMatchedS;
  unordered_set<char> notMatchedT;
  
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != t[i]) {
      notMatchedS.insert(s[i]);
      notMatchedT.insert(t[i]);
    }
  }
  
  int count = s.length() - notMatchedS.size();
  int common = 0;
  for (char ch : notMatchedS) {
    if (notMatchedT.find(ch) != notMatchedT.end()) {
      common++;
      if (common == 2) break;
    }
  }
  
  return count + common;
}