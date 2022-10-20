/* code link:
https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
*/
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       typedef vector<int>::const_iterator Iter;
        queue<tuple<TreeNode**, Iter, Iter>> q;

        TreeNode* ans = nullptr;
        q.push({&ans, cbegin(nums), cend(nums)});

        while (!empty(q)) {
            auto [nptr, b, e] = q.front(); q.pop();

            if (b == e) continue;

            Iter mid = next(b, distance(b, e) / 2);
            *nptr = new TreeNode(*mid);

            q.push({&(*nptr)->left, b, mid});
            q.push({&(*nptr)->right, mid + 1, e});
        }

        return ans;
    
        
    }
};