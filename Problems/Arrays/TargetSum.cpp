#include <iostream>
#include <vector>
using namespace std;


bool findPair(vector<int> arrayNums, int targetX) {
    sort(arrayNums.begin(), arrayNums.end()); // sorted array

    int start = 0,
        end = arrayNums.size() - 1,
        sum;
    while (start < arrayNums.size() && end >= 0) {
        sum = arrayNums[start] + arrayNums[end]; 
        if (sum == targetX) {
            cout << "Numbers: " << arrayNums[start] << " + " <<arrayNums[end] << endl;
            return true;
        } else if (sum > targetX) {
            end--;
        } else {
            start++;
        }
    }

    return false;

}


int main() {
    vector<int> arrayNums;

    arrayNums.push_back(3);
    arrayNums.push_back(7);
    arrayNums.push_back(8);
    arrayNums.push_back(1);
    arrayNums.push_back(2);
    arrayNums.push_back(4);

    int target = 12;

    cout << findPair(arrayNums, target) << endl;
}