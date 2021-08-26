#include <iostream>
#include <climits> 
using namespace std;



bool isInt(string str) {
  for (int i = 0; i < str.length() ; i++) {
    if (!isdigit(str[i])) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  //cout << "Ingresa valor de n: ";

  cout << "Ingresa valor de n: ";
  cin >> n;
  
  while (cin.fail()) {
    cin.clear(); 
    cin.ignore(INT_MAX, '\n'); 
    cout << " ! You can only enter numbers: ";
    cin >> n;
  }

  int denominaciones[5];

  int i = 0;

  while (i < n) {
    cin.clear(); 
    cin.ignore(INT_MAX, '\n'); 
    cout << i + 1 << " - Ingrese denominacion de moneda " << i + 1 << " : " ;
    cin >> denominaciones[i];

    if (!cin.fail()) {
      i++;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << denominaciones[i] << endl ;
  }
}