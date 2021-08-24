#include <iostream>
using namespace std;

void mergeSort(float list[], float begin, float centro, float end ){
  int middle = (begin + end) / 2;
  int size = end - begin + 1;
  float newTempList[size];
  int x = begin,
      y = middle + 1;
  for (int i = 0; i < size; i ++) {
    if(x <= middle && y <= end) {
      if(list[x] < list[y]) {
        newTempList[i] = list[x++];
      }
      else {
        newTempList[i] = list[y++];
      }
    }  
    else if(x <= middle){
      newTempList[i] = list[x++];
    }
    else {
      newTempList[i] = list[y++];
    }
     
  }

  int ready = begin;

  for (int j = 0; j < size; j++) {
    list[ready + j] = newTempList[j];
  }
  
}

void merge( float lista[], float begin, float end ) {
  int middle;
  if( end > begin ) {
    middle = (begin + ( end - 1 )) / 2;
    merge(lista, begin, middle);
    merge(lista, middle + 1, end);
    mergeSort( lista , begin , middle,  end );
  }else {
    return;
  }
}

int main() { 
  int n;
  float x;

  cout << "Ingrese el numero de elementos a ingresar: ";
  cin >> n;

  float lista[ n ];
  int begin = 0;
  int end = n;

  for ( int i = 0; i < n; i++ ) {
    cout << i + 1 << ".- Ingrese numero: ";
    cin >> x;
    lista[ i ] = x;
  }

  merge( lista, begin , end - 1 );

  for ( int i = 0; i < n; i++ ) {
    cout << lista[ i ] << endl;
  }
}