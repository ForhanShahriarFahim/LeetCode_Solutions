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
    //TIme complexity : O(N) Space Complexity: O(N)
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int>postorder;
        if(root == NULL) return postorder;
        st.push(root);
        while(!st.empty()){
            root = st.top();
            st.pop();
            postorder.push_back(root->val);
            if(root->left!=NULL) st.push(root->left);
            if(root->right!=NULL) st.push(root->right);            
        }
        reverse(postorder.begin(), postorder.end());
        return postorder;
    }
};