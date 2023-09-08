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
        this->left = this->right;
    }
};

void dfs(TreeNode *root, int key, std::queue<TreeNode *> &leaf, std::map<TreeNode *, TreeNode *> &data)
{
    if (root == NULL)
        return;

    if (root->left)
        data[root->left] = root;
    if (root->right)
        data[root->right] = root;
    if (root->left == NULL && root->right == NULL && root->val == key)
        leaf.push(root);

    dfs(root->left, key, leaf, data);
    dfs(root->right, key, leaf, data);
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    int key;
    std::cin >> key;

    std::map<TreeNode *, TreeNode *> data;
    std::queue<TreeNode *> leaf;

    dfs(root, key, leaf, data);

    while (leaf.size())
    {
        TreeNode *local = leaf.front();
        leaf.pop();

        TreeNode *parent = data[local];

        if (data.count(local))
        {
            if (parent && parent->left && parent->left == local)
                parent->left = NULL;
            if (parent && parent->right && parent->right == local)
                parent->right = NULL;
        }

        if (parent && parent->left == NULL && parent->right == NULL && parent->val == key)
            leaf.push(parent);
    }
}