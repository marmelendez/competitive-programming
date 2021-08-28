#include <iostream>
#include <map>
#include <queue>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

    void topView(Node * root) {
        if (root != nullptr) {
            int distance = 0;
            map<int, int> topNodes;
            map<Node*, int> nodesDis;
            nodesDis[root] = distance;

            queue<Node*> nodes;
            nodes.push(root);

            while (nodes.size()) {
                distance = nodesDis[root];

                if (topNodes.count(distance) == 0) {
                    topNodes[distance] = root->data;
                }
            
                if (root->right) {
                    nodes.push(root->right);
                    nodesDis[root->right] = distance + 1;
                }

                if (root->left) {
                    nodes.push(root->left);
                    nodesDis[root->left] = distance - 1;
                }

                nodes.pop();
                root = nodes.front();
            }

            for (auto i = topNodes.begin(); i != topNodes.end(); i++) {
                cout << i->second << " "; 
            }
        }
        return;
    }

    int main() {
        return 0;
    }
