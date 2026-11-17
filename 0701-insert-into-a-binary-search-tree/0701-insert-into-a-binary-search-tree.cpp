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
    
    TreeNode* insertion(TreeNode *root, int target)
    {
        if(root == nullptr)
        {
            TreeNode *temp = new TreeNode(target);
            return temp;
        }

        if(root -> val < target)
        {
            // recursively right
            root -> right = insertion(root -> right, target);
        }

        else
        {
            // Recursively left
            root -> left = insertion (root -> left, target);
        }

        return root;
    };

    TreeNode* insertIntoBST(TreeNode* root, int val) {

        root = insertion(root, val);

        return root;
        
    }
};