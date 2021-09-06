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
        for (int i = 0; i < res.size(); i++){
            cout << res[i] << "  ";
        }

        cout << endl;

        int i = getIndex(res,p->val);
        int j = getIndex(res,q->val);

        vector<int> pAncestors;
        vector<int> qAncestors;

        while (i > 0) {
            int index = floor((i-1)/2); // 1
            pAncestors.push_back(res[index]);
            i = index;
        }

        for (int i = 0; i < pAncestors.size(); i++){
            cout << pAncestors[i] << "  ";
        }
        
        cout << endl;

        while (j > 0) {
            int index = floor((j-1)/2); // 1
            qAncestors.push_back(res[index]);
            j = index;
        }

        for (int i = 0; i < qAncestors.size(); i++){
            cout << qAncestors[i] << "  ";
        }

        vector<int> v(pAncestors.size() + qAncestors.size());
        vector<int>::iterator it;
  
        it = set_intersection(pAncestors.begin(), pAncestors.end(), qAncestors.begin(), qAncestors.end(), v.begin());

        cout << *v.begin() << endl;   
    }

    TreeNode* lca(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)
            return NULL;

        cout << root->val << endl;
        if(root->val==p->val||root->val==q->val)
            return root;
//      Check in leftsubtree and right subtree
        TreeNode* leftSearch = lca(root->left,p,q);
        TreeNode* rightSearch = lca(root->right,p,q);
        // If not in left, return the result in rightsubtree
        if(leftSearch==NULL)
            return rightSearch;
        if(rightSearch==NULL)
            return leftSearch;
			//since both are not null, the root is answer
        return root;
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

    /*TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);
    root->right->right->left = new TreeNode(6);*/

    TreeNode* lowesr = sol.lca(root, new TreeNode(6), new TreeNode(4));
    cout << lowesr->val << endl;
}