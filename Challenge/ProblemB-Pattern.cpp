#include <iostream>
#include <vector>
using namespace std;


vector<int> lps(string pattern) {
  int size = pattern.size(),
      i = 1, 
      j = 0;
  vector<int> lps(size);
  lps[0] = 0;

  while (i < size) {
    if (pattern[i] == pattern[j]){
      lps[i++] = ++j;
    } else {
      if (j != 0){
        j = lps[j-1];
      } else {
        lps[i++] = 0;
      }
    }
  }

  return lps;
}

vector<int> findPattern(string str, string pattern) {
  vector<int> lpsArray = lps(pattern);
  vector<int> position;

  int j = 0, i = 0;

  while (i < str.size()) {
    if (str[i] == pattern[j]) {
      j++;
      i++;
    }
    if (j == pattern.size()) {
      position.push_back(i - j + 1);
      j = lpsArray[j - 1];
    } else if (i < str.size() && str[i] != pattern[j]) {
      if (j != 0) {
        j = lpsArray[j - 1];
      } else {
        i++;
      }
    }
  }

  /*for (int i = 0; i < str.size(); i++) {
    if (str[i] == pattern[j]) {
      j++;
    } else {
      j = lpsArray[j-1];
    }

    if (j == pattern.size()) {
      position.push_back(i - pattern.size() + 2);
      j = lpsArray[j - 1]; //=0
    }
  }*/

  return position;
}


int main() {
    int t;
    string a,b;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        vector<int> sol = findPattern(a,b);
        if (sol.empty()) {
          cout << "Not Found" << endl << endl;
        } else {
          cout << sol.size() << endl;
          for (int i = 0; i < sol.size(); i++) {
            cout << sol[i] << " ";
          }
          cout << endl << endl;
        }
    }
}