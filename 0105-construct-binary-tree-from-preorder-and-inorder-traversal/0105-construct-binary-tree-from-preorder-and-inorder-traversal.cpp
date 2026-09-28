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

    int find(vector<int>&inorder, int target, int start, int end)
    {
        for(int i=start;i<=end;i++)
        if(inorder[i] == target) return i;

        return -1;
    };

    TreeNode* Tree(vector<int>&preorder, vector<int>&inorder, int inStart, int inEnd, int idx)
    {
        if(inStart > inEnd)
        return nullptr;

        TreeNode *root = new TreeNode(preorder[idx]);

        int pos = find(inorder, preorder[idx], inStart, inEnd);

        // Left -->
        root -> left = Tree(preorder, inorder, inStart, pos - 1, idx + 1);

        // Right -->
        root -> right = Tree(preorder, inorder, pos + 1, inEnd, idx+(pos - inStart) + 1);

        return root;
    };

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        return Tree(preorder, inorder, 0, preorder.size()-1, 0);
        
    }
};