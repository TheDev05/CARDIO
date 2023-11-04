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

// isBST, min, max, sum
std::pair<int, std::pair<std::pair<int, int>, int>> traverse(TreeNode *root, int &max)
{
    if (root == NULL)
        return {1, {{INT_MAX, INT_MIN}, 0}};

    auto it1 = traverse(root->left, max);
    auto it2 = traverse(root->right, max);

    if (it1.first && it2.first && root->val > it1.second.first.second && root->val < it2.second.first.first)
    {
        int sum = it1.second.second + it2.second.second + root->val;
        max = std::max(max, sum);

        return {1, {{std::min({it1.second.first.first, it2.second.first.first, root->val}), std::max({it1.second.first.second, it2.second.first.second, root->val})}, sum}};
    }

    return {0, {{0, 0}, 0}};
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