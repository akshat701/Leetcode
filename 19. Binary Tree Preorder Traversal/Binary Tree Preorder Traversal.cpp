/* Code Link:
https://leetcode.com/problems/binary-tree-preorder-traversal/
*/
class Solution {
public:
    vector<int> ans;
    void fill(TreeNode* root){
        if(!root)
            return;
        ans.push_back(root->val);  // Preoder
        fill(root->left);
        fill(root->right);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        fill(root);
        return ans;
    }
};