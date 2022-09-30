/* Que Link:
https://leetcode.com/problems/maximum-depth-of-binary-tree/
*/
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        int h1 = maxDepth(root->left);
        int h2 = maxDepth(root->right);
        int ans = max(h1 , h2) + 1;
        return ans;
    }
};