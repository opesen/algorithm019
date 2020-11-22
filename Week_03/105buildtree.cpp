/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* buildTree(std::vector<int>& preorder, std::vector<int>& inorder) {
        int n = preorder.size();

        for (int i = 0; i < n; ++i) {
            index[inorder[i]] = i;
        }

        return buildhelp(preorder, inorder, 0, n - 1, 0, n - 1);
    }

private:
    TreeNode* buildhelp(const std::vector<int>& preorder, 
                        const std::vector<int>& inorder, 
                        int preorder_left, 
                        int preorder_right, 
                        int inorder_left, 
                        int inorder_right) {

        if (preorder_left > preorder_right) {
            return nullptr;
        }

        int preorder_root = preorder_left;
        int inorder_root = index[preorder[preorder_root]];

        TreeNode* root = new TreeNode(preorder[preorder_root]);
        int size_left_subtree = inorder_root - inorder_left;
        
        root->left = myBuildTree(preorder, inorder, preorder_left + 1, preorder_left + size_left_subtree, inorder_left, inorder_root - 1);
        root->right = myBuildTree(preorder, inorder, preorder_left + size_left_subtree + 1, preorder_right, inorder_root + 1, inorder_right);
        
        return root;
    }

private:
    unordered_map<int, int> index;
};
