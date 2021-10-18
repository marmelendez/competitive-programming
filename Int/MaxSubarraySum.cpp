#include <iostream>
#include <vector>

using namespace std;

int getMaxSum(vector<int> arrayNums) {
    int sum = 0, max = arrayNums[0];

    for (int i = 0; i < arrayNums.size(); i++) {
        sum += arrayNums[i];
        if (sum < arrayNums[i]) {
            sum = arrayNums[i];
        }

        if (max < sum) {
            max = sum;
        }
    }

    return max;
}

int main() {
    vector<int> arrayNums;
    arrayNums.push_back(1);
    arrayNums.push_back(-3);
    arrayNums.push_back(5);
    arrayNums.push_back(-2);
    arrayNums.push_back(9);
    arrayNums.push_back(-8);
    arrayNums.push_back(-6);
    arrayNums.push_back(4);
    // 1,‐3,5,‐2,9,‐8,‐6,4]

    cout << getMaxSum(arrayNums) << endl;
}