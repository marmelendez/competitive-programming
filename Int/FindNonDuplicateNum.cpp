#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int findNonDuplicate(vector<int> arrayNums) {
    unordered_set<int> numbers;
    int sum =  0;

    for (int i = 0; i < arrayNums.size(); i++) {
        if (numbers.find(arrayNums[i]) == numbers.end()) { //not found
            numbers.insert(arrayNums[i]);
            sum += arrayNums[i];
        } else { // found
            sum -= arrayNums[i];
        }
    }

    return sum;
}


int main() {
    vector<int> numbers;
    numbers.push_back(2);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);
    numbers.push_back(4);
    numbers.push_back(3);

    cout << numbers.size() << endl;

    cout << findNonDuplicate(numbers) << endl;
}