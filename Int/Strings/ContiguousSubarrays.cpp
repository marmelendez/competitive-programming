#include <iostream>

using namespace std;
// arr = [3, 4, 1, 6, 2]
// output = [1, 3, 1, 5, 1]

// 3 -> [3]
// 4 -> [4], [3,4], [4,1]
// 1 -> [1]
// 6 -> [6], [6, 2], [1,6], [4,1,6], [3,4,1,6]
// 2 -> [2]

// number of contiguous subarrays with arr[i] max value, start or end on index i

// count = 1;
// check to the right and left if number[i] > than the adjacent numbers
// left (i > i-1) true -> count+1 and continue with the previous one
// rigth (i > i +1) true -> count+1 and continue with the next one


vector <int> CountSubarrays(vector <int> arr) {
  vector<int> result;
  int count;
  int number;
  int j;
  
  for (int i = 0; i < arr.size(); i++) {
    count = 1;
    number = arr[i];
    
    // Check left
    j = i - 1;
    while (j >= 0 && number > arr[j]) {
      count++;
      j--;
    }
    
    // Check right
    j = i + 1;
    while (j < arr.size() && number > arr[j]) {
      count++;
      j++;
    }
    
    result.append(count);
  }
  
  return result;
}

// TEST CASE 1
// 3, 4, 1, 6, 2 //size 5
// count  : 3
// number : 4
// i      : 1
// j      : 3
// result = [1, 3] 