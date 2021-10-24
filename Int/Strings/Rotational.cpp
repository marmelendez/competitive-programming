#include <iostream>

using namespace std;

// rotational cipher
// Test case
// 1. "Zeb-129" 3 -> 
// Case 1: Uppercase A-Z 
// Case 2: Lowercase a-z
// Case 3: Number 0-9

// 1. "Zeb-129" 30 -> 
// Case 1: Uppercase A-Z 
// Case 2: Lowercase a-z
// Case 3: Number 0-9


// ASCII
// Case 1: Uppercase A-Z: 65-90
// Case 2: Lowercase a-z: 97-122
// Case 3: Number 0-9: 48-57

// SOLUTION
// Check the case: alpha(lower, upper) or digit

// Add the rotational factor
// Case 1: Uppercase A-Z: 65-90
// ind = character + factor % 26

// Case 2: Lowercase a-z: 97-122
// ind = character + factor % 26

// Case 3: Number 0-9: 48-57
// ind = character + factor % 10

// if ind > lastRange -> ind = first + (ind - last) -1

char helper(int first, int last, int sum) {
  if (sum > last) {
    sum = first + (sum - last) -1;
  }
  return (char) sum;
}


string rotational(string str, int factor) {
  string resStr = "";
  char character;
  int sum;
  
  for (int i = 0; i < str.length(); i++) {
    character = str[i];
    if (character>= 65 && character <= 90) { //UPPERCASE 
      sum = character + factor % 26;
      resStr += helper(65, 90, sum);
    
    } else if (character>= 97 && character <= 122) { //LOWERCASE
      sum = character + factor % 26; //297 11
      cout << sum << endl;
      resStr += helper(97, 122, sum);
    
    } else if (character>= 48 && character <= 57) { //DIGITS
      sum = character + factor % 10;
      resStr += helper(48, 57, sum);
      
    } else {
      resStr += str[i];
    }
  }
  return resStr;
}

int main() {
    cout << rotational("All-convoYs-9-be:Alert1.", 4) << endl; //Epp-gsrzsCw-3-fi:Epivx5.
    cout << rotational("abcdZXYzxy-999.@", 200) << endl; //stuvRPQrpq-999.@
    cout << rotational("z", 200) << endl; //r
 }