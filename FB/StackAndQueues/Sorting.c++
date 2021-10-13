#include <iostream>
#include <vector>

using namespace std;

vector<int> StockSpan(vector<int> prices) {
    int profit = 1;
    vector<int> res;
    int j = 0;
    for (int i = 0; i < prices.size(); i++)  {
        profit = 1;
        j = i - 1;
        while (j >= 0) {
            if (prices[i] > prices[j]) {
                profit++;
                j--;
            } else {
                j = -1;
            }
        }
        res.push_back(profit);
    }
    return res;
}

int main()
{
    vector<int> vec;
    vec.push_back(100);
    vec.push_back(80);
    vec.push_back(60);
    vec.push_back(70);
    vec.push_back(60);
    vec.push_back(75);
    vec.push_back(85);
    vector<int> res = StockSpan(vec);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    } 
    cout<< endl;
}
