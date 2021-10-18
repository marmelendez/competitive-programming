#include <iostream>
#include <stack>  
#include <vector>  
using namespace std;

int MIN = 9999999;


int findMinimum(vector<int> operations) {
    stack<int> allItems;
    stack<int> minimum;

    minimum.push(MIN);

    for (int i = 0; i < operations.size(); i++) {
        switch(operations[i]) {
            case 1: //pop
                if (allItems.top() == minimum.top()) {
                    minimum.pop();
                }
                allItems.pop();
                break;
            case 2: 
                return minimum.top();
                break;
            default: //push
                allItems.push(operations[i]);
                if (operations[i] < minimum.top()) {
                    minimum.push(operations[i]);
                }
                break;
        }
    }

    return minimum.top();
}

int main() {
    vector<int> operations; //1 = pop, 2 == min >3 push
    int n,
        operation;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> operation;
        operations.push_back(operation);
    }

    cout << findMinimum(operations) << endl;
}