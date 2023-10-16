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

/*

4
1
2
3

*/

int traverse(TreeNode *root, bool ok)
{
    if (root == NULL)
        return 0;

    int sum1 = 0, sum2 = 0;

    if (!ok)
        sum1 = root->val + traverse(root->left, !ok) + traverse(root->right, !ok);

    sum2 = traverse(root->left, ok) + traverse(root->right, ok);

    return std::max(sum1, sum2);
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    std::cout << traverse(root, false);
}