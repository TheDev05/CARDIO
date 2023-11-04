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

std::pair<int, int> traverse(TreeNode *root, int &count)
{
    if (root == NULL)
        return {0, 0};

    auto it1 = traverse(root->left, count);
    auto it2 = traverse(root->right, count);

    int sum = it1.first + it2.first + root->val;
    int nodes = it1.second + it2.second + 1;

    int avg = sum / nodes;
    if (avg == root->val)
        count++;

    return {sum, nodes};
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    int count = 0;
    traverse(root, count);

    std::cout << count;
}