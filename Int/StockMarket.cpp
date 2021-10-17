#include <iostream>
using namespace std;


int main() {
  int a[7] = {3,7,2,4,10,3,1};
  
  int   min = a[0], 
        max = 0, 
        dif,
        size = sizeof(a)/sizeof(a[0]); 
  
  for (int i = 0; i < size; i++) {
    if (a[i] < min) {
      min = a[i];
    }
    dif = a[i] - min;
    if (dif > max) {
      max = dif;
    }
  }
  
  cout << max << endl;  
}
