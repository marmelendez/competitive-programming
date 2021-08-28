#include <iostream>
#include <queue>
#include <cmath>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
    vector<int> printLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> res;
        TreeNode* current;
        q.push(root);
        res.push_back(root->val);
        
        while (!q.empty()) {
            current = q.front();
            //cout << current->val << " ";
            q.pop();

            if (current->left != NULL) {
                q.push(current->left);
                res.push_back(current->left->val);
            }  else {
                res.push_back(-1);
            }
            
            if (current->right != NULL) {
                q.push(current->right);
                res.push_back(current->right->val);
            } else {
                res.push_back(-1);
            }
        }

        return res;
    };

    int getIndex(vector<int> res, int p) {
        for (int i = 0; i < res.size(); i++) {
            if (res[i] == p) {
                return i;
            }
        }
        return -1;
    }

    //TreeNode*
    void lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<int> res = printLevelOrder(root);
        int i = getIndex(res,p->val);
        int j = getIndex(res,q->val);

        vector<int> pAncestors;
        vector<int> qAncestors;

        while (i > 0) {
            int index = floor((i-1)/2); // 1
            pAncestors.push_back(res[index]);
            i = index;
        }

        for (int k = 0; k < pAncestors.size();k++) {
            cout << pAncestors[k] << " ";
        }

        
    }
};

int main() {
    Solution sol = Solution();
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    sol.lowestCommonAncestor(root, new TreeNode(2), new TreeNode(4));
}