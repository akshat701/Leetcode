/* code link:
https://leetcode.com/problems/invert-binary-tree/
*/
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root) {
			std::swap(root->left, root->right);
			invertTree(root->left);
			invertTree(root->right);
		}
		return root;
    }
};