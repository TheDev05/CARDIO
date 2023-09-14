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

int traverse(TreeNode *root, int &sum, int temp)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
    {
        sum += (temp * 10) + root->val;
        return 0;
    }

    traverse(root->left, sum, (temp * 10) + root->val);
    traverse(root->right, sum, (temp * 10) + root->val);

    return 0;
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    int sum = 0;
    traverse(root, sum, 0);

    std::cout << sum;
}