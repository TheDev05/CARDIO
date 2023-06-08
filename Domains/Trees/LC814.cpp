#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left, *right;

    TreeNode(int temp)
    {
        this->val = temp;
        this->left = this->right = NULL;
    }
};

TreeNode *traverse(TreeNode *root)
{
    if (root == NULL)
        return NULL;

    root->left = traverse(root->left);
    root->right = traverse(root->right);

    if (root->left == NULL && root->right == NULL && root->val == 0)
        return NULL;

    return root;
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    return traverse(root);
}