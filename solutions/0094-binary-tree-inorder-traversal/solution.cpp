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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> out{};

        if (root == nullptr)
        {
            return out;
        }

        vector<int> left = inorderTraversal(root->left);
        out.insert(out.end(), left.begin(), left.end());

        out.push_back(root->val);

        vector<int> right = inorderTraversal(root->right);
        out.insert(out.end(), right.begin(), right.end());

        return out;
    }
};
