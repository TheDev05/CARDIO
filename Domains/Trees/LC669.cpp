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

TreeNode *traverse(TreeNode *temp)
{
    if (temp->left == NULL && temp->right == NULL)
        return NULL;

    if (temp->left && temp->right)
    {
        TreeNode *inox = temp->right;
        while (inox->left)
            inox = inox->left;

        inox->left = temp->left;
        return temp->right;
    }
    else if (temp->left)
        return temp->left;
    else
        return temp->right;
}

void dfs(TreeNode *root, int low, int high)
{
    if (root == NULL)
        return;

    if (root->left && (root->left->val < low || root->left->val > high))
        root->left = traverse(root->left);
    else if (root->right && (root->right->val < low || root->right->val > high))
        root->right = traverse(root->right);

    dfs(root->left, low, high);
    dfs(root->right, low, high);
}

int main()
{
    TreeNode *root = new TreeNode(2);

    root->left = new TreeNode(1);
    root->right = new TreeNode(3);

    int low, high;
    std::cin >> low >> high;

    dfs(root, low, high);
}