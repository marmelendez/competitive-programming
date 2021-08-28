#include <iostream>
#include <climits> 
#include <map>

using namespace std;

int minNumber(int num1, int num2) {
  if (num1 < num2) {
    return num1;
  }
  return num2;
}

int calculateChange(int n, int monedas[], int size) {
  int max = n + 1,
      min;
  map<int, int> minChange = {{0, 0}};

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < size; j++) {
      if (i >= monedas[j]) {
        auto it = minChange.find(i-monedas[j]);
        min = minNumber(it->second + 1, max);
        max = min;
      }
    }

    minChange.insert(pair<int,int>(i,min));
    max = n + 1;
  }
  
  auto it = minChange.find(n);
  return it->second;
}

int validateInput(string name) {
  int n;
  cout << "Ingresa valor de "<< name << " : ";
  cin >> n;
  
  while (cin.fail()) {
    cin.clear(); 
    cin.ignore(INT_MAX, '\n'); 
    cout << " ! Solo puedes ingresar numeros enteros: ";
    cin >> n;
  }
  return n;
}

int main() {
  int n,
      p,
      q,
      i = 0,
      cambio;

  n = validateInput ("n");
  int denominaciones[5];

  while (i < n) {
    cin.clear(); 
    cin.ignore(INT_MAX, '\n'); 
    cout << i + 1 << " - Ingrese denominacion de moneda " << i + 1 << " : " ;
    cin >> denominaciones[i];

    if (!cin.fail()) {
      i++;
    }
  }

  p = validateInput ("p");
  q = validateInput ("q");

  if (q >= p) {
    cambio = q - p;
    cout << calculateChange(cambio, denominaciones, n) << endl;
  } else {
    cout << "No alcanzas a pagar el precio del producto :(\n";
  }
}