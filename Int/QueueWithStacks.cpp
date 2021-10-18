#include <iostream>
#include <stack>

using namespace std;

class Queue {
    private:
        stack<int> in;
        stack<int> out;

    public:
        void enqueue(int value) {
            while (!out.empty()) {
                in.push(out.top());
                out.pop();
            }
            in.push(value);
        }

        int dequeue() {
            while(!in.empty()) {
                out.push(in.top());
                in.pop();
            }
            int res = out.top();
            out.pop();
            return res;
        }
};

int main() {
    Queue fila = Queue();
    fila.enqueue(5);
    fila.enqueue(6);
    cout << fila.dequeue() << endl;
    cout << fila.dequeue() << endl;
    //fila.enqueue(1);
    //cout << fila.dequeue() << endl;
    //fila.enqueue(7);
    //cout << fila.dequeue() << endl;
}