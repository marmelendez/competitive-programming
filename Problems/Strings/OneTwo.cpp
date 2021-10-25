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

vector<int> solution(string s) {
    string options[3] = {"twone", "one", "two"};
    vector<int> res;
    int pos;

    for (int i = 0; i < 3; i++) {
        int j = 0;
        while (s.find(options[i], j) != -1){
            j = s.find(options[i], j);
            pos = j + (options[i].size() / 2);
            s[pos] = 'Z';
            res.push_back(pos);
        }
    }

    return res; 
}

int main() {
    int t;
    string s;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> s; 
        printResult(solution(s));
    }
}
