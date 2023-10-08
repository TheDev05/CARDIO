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

int traverse(TreeNode *root, int sum, int k)
{
    if (root->left == NULL && root->right == NULL && sum < k)
        return 1;

    if (root == NULL)
        return 0;

    int val1 = 0, val2 = 0;
    val1 = traverse(root->left, sum + root->val, k);
    val2 = traverse(root->right, sum + root->val, k);

    if (val1)
        root->left = NULL;
    if (val2)
        root->right = NULL;

    return std::min(val1, val2);
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    int k;
    std::cin >> k;

    traverse(root, root->val, k);
}