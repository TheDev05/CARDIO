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

std::pair<int, int> traverse(TreeNode *root, int &max)
{
    if (root == NULL)
        return {INT_MAX, INT_MIN};

    auto left = traverse(root->left, max);
    auto right = traverse(root->right, max);

    int mini = std::min(left.first, right.first);
    if (mini != INT_MAX)
        max = std::max(max, std::abs(mini - root->val));

    int maxi = std::max(left.second, right.second);
    if (maxi != INT_MIN)
        max = std::max(max, std::abs(maxi - root->val));

    return {std::min(mini, root->val), std::max(root->val, maxi)};
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    int max = 0;
    traverse(root, max);

    std::cout << max;
}