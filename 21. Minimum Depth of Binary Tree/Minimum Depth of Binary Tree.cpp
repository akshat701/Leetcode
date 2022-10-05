/* Code Link:
https://leetcode.com/problems/minimum-depth-of-binary-tree/
*/
class Solution {
public:
    int minDepth(TreeNode* root) {
        if( !root) return 0 ;
        int l = minDepth(root->left);
        int r = minDepth(root->right);
        if(l > 0 and r > 0)
            return 1+min(l,r);
        else
            return  1+max(l,r);
    }
};