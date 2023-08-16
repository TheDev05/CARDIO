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

std::pair<int, TreeNode *> traverse(TreeNode *root, TreeNode *val1, TreeNode *val2)
{
    if (root == NULL)
        return {0, NULL};

    auto it1 = traverse(root->left, val1, val2);
    auto it2 = traverse(root->right, val1, val2);

    if (it1.first == 2)
        return it1;
    if (it2.first == 2)
        return it2;

    if (it1.first && it2.first)
        return {2, root};

    if ((it1.first || it2.first) && (root->val == val1->val || root->val == val2->val))
        return {2, root};

    if (root->val == val1->val || root->val == val2->val || it1.first || it2.first)
        return {1, root};

    return {0, NULL};
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->left->left = new TreeNode(6);

    root->left->right = new TreeNode(4);

    root->right = new TreeNode(5);

    TreeNode *val1, *val2;

    val1 = root->left;
    val2 = root->left->left->left;

    std::cout << traverse(root, val1, val2).second->val;
}