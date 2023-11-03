#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left, *right;

    TreeNode(int temp)
    {
        this->left = this->right = NULL;
        this->val = temp;
    }
};

int traverse(TreeNode *root, bool ok)
{
    if (root == NULL)
        return 0;

    int val1 = traverse(root->left, !ok);
    int val2 = traverse(root->right, !ok);

    if (ok)
        return val1 + val2 + 1;

    return val1 + val2;
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    int count = 0;
    int val1 = traverse(root, false);
    int val2 = traverse(root, true);

    std::cout << std::min(val1, val2);
}