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

    TreeNode *left = traverse(root->left);
    TreeNode *right = traverse(root->right);

    if (left)
        left->right = right;
    root->left = NULL;
    root->right = left;

    return root;
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    traverse(root);
    
    TreeNode *newRoot = root;
    while (newRoot)
    {
        std::cout << newRoot->val << " ";
        newRoot = newRoot->right;
    }
}