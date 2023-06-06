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

TreeNode *traverse(TreeNode *root, TreeNode *temp)
{
    if (root == NULL)
        return NULL;

    TreeNode *dash1 = traverse(root->left, temp);
    TreeNode *dash2 = traverse(root->right, temp);

    root->left = dash1;
    root->right = dash2;

    if (dash1 == NULL && dash2 == NULL && root->val == 0)
        return NULL;

    return root;
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    TreeNode *temp = root;
    traverse(root, temp);
}