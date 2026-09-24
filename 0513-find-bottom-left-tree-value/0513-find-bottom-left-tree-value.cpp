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
    int findBottomLeftValue(TreeNode* root) {

        // In BFS --> We need to simply doing traversal and see if no insertion of left and right child left
        // so return the element which is less value -->

        queue<TreeNode*>q;
        TreeNode *temp;

        q.push(root);

        while(!q.empty())
        {
            temp = q.front();
            q.pop();

            if(temp -> right)
            q.push(temp -> right);

            if(temp -> left)
            q.push(temp -> left);   
        }

        return temp -> val;
    }
};