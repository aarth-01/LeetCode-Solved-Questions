/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void inOrder(TreeNode* node , vector<int>&vec){
        if(node==nullptr) return;

        inOrder(node->left, vec);
        vec.push_back(node->val);
        inOrder(node->right, vec);
    }
public:

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>vec;
        inOrder(root, vec);
        return vec;
    }
};