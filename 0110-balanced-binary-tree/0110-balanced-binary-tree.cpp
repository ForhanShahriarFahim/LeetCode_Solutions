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
public:
    bool isBalanced(TreeNode* root) {
        return dfsHeight(root)!=-1;
    }
    int dfsHeight(TreeNode* root){
        if(root == NULL) return 0;
        
        int lf = dfsHeight(root->left);
        if(lf == -1) return -1;
        int rh = dfsHeight(root->right);
        if(rh == -1) return -1;
        if(abs(lf-rh)>1) return -1;
        return 1 + max(rh, lf);
    }
};