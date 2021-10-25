#include <iostream>
#include <vector>
#include <unordered_map>
// Add any extra import statements you may need here

using namespace std;

// Add any helper functions you may need here


int numberOfWays(vector<int>& arr, int k) {
  unordered_map<int, int> numbers;
  int total = 0;
 
  for (int i = 0; i <arr.size(); i++) {
    int comp = k - arr[i];
    if (numbers.find(comp) != numbers.end()) {
      int count = numbers[comp];
      for (int j = 0; j < count; j++){
        total++;
      }
    }
    numbers[arr[i]]++;
  }  
  return total;
}
