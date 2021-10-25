#include <iostream>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

// Time complexity: O( log N) in Average Case and O(N) in Worst Case
// Space complexity: O(N)
int getKthElement(vector<int> arrInt, int k) {
    set<int> sortedArray;  // Set in C++ STL is implemented using Binary Search Tree  log(n)
    for (int element: arrInt) {
        sortedArray.insert(element);
    }

    return *next(sortedArray.begin(), k - 1);
    /*
    set<int>iterator it = my_set.begin();
    advance(it, n);
    int x = *it;
    */

   // To find the median
   //return *next(sortedArray.begin(), floor((arrInt.size()-1)/2));
   
}


int main() {
    int k = 3;
    vector<int> arrInt;
    arrInt.push_back(7);
    arrInt.push_back(10);
    arrInt.push_back(4);
    arrInt.push_back(3);
    arrInt.push_back(20);
    arrInt.push_back(15);
    arrInt.push_back(50);

    cout << getKthElement(arrInt,k) << endl;
}