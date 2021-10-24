#include <iostream>

using namespace std;

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