#include <iostream>
using namespace std;


bool foundSubstring(string str, string substr) {
    int found = str.find(substr, 0);
    if (found >= 0 && found <str.length()) {
        return true;
    }
    return false;
}

int main() {
    string str = "geeksforgeeks a computer science";
    string substr = "nel";

    cout << foundSubstring(str,substr) << endl;
  
    return 0;
}