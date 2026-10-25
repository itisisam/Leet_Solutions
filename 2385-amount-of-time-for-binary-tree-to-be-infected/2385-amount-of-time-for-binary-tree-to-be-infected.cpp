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

    int burn(TreeNode *root, int &timer, int target)
    {
        if(root == nullptr)
        return 0;

        if(root -> val == target)
        return -1;

        int left = burn(root -> left, timer, target);
        int right = burn(root -> right, timer, target);

        if(left < 0)
        {
            timer = max(timer, abs(left) + right);
            return left - 1;
        }

        if(right < 0)
        {
            timer = max(timer, left + abs(right));
            return right - 1;
        }

        return 1 + max(left, right);

    };

    void find(TreeNode *root, int target, TreeNode *&burnNode)
    {
        if(root == nullptr)
        return;

        if(root -> val == target) {
        burnNode = root;
        return;
        }

        find(root -> left, target, burnNode);
        find(root -> right, target, burnNode);
    };

    int height(TreeNode *root)
    {
        if(root == nullptr)
        return 0;

        return 1 + max(height(root -> left), height(root -> right));
    };

    int amountOfTime(TreeNode* root, int start) {

        int timer = 0;
        burn(root, timer, start);

        // Find the Height of Target Node if we consider it as root node

        TreeNode *burnNode = nullptr;
        find(root, start, burnNode);

        int ht = height(burnNode) - 1;

        return max(timer, ht);
    }
};