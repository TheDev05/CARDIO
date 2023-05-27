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

std::pair<TreeNode *, int> traverse(TreeNode *root, int height)
{
    if (root->left == NULL && root->right == NULL)
        return {root, height};

    std::pair<TreeNode *, int> temp1 = {NULL, 0}, temp2 = {NULL, 0};

    if (root->left != NULL)
        temp1 = traverse(root->left, height + 1);
    if (root->right != NULL)
        temp2 = traverse(root->right, height + 1);

    if (temp1.first != NULL && temp2.first != NULL && temp1.second == temp2.second)
        return {root, temp1.second};

    if (temp1.second > temp2.second)
        return temp1;
    else if (temp2.second > temp1.second)
        return temp2;

    return {NULL, 0};
}

int main()
{
    TreeNode *root = new TreeNode(0);

    root->left = new TreeNode(1);
    root->right = new TreeNode(3);

    root->left->right = new TreeNode(2);

    std::cout << traverse(root, 1).first->val;
}