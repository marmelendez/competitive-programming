#include <iostream>
#include <vector>
using namespace std;

void printResult(vector<int> res) {
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++) {
        cout << res[i]  + 1 << " ";
    }
    cout << endl;
}

void solution(string s) {
    string opt[3] = {"twone", "one", "two"};
    vector<int> res;
    int pos;

    for (int i = 0; i < 3; i++) {
        int j = 0;
        while (s.find(opt[i], j) != -1){
            j = s.find(opt[i], j);
            pos = j + (opt[i].size() / 2);
            s[pos] = 'z';
            res.push_back(pos);

        }
    }

    printResult(res); 
}

int main() {
    int t;
    string s;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> s; 
        solution(s);
    }
}
