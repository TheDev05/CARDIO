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

TreeNode *traverse(TreeNode *root, std::set<int> &remove, std::queue<TreeNode *> &inox)
{
    if (root == NULL)
        return NULL;

    if (remove.count(root->val))
    {
        if (root->left)
            inox.push(root->left);
        if (root->right)
            inox.push(root->right);

        return NULL;
    }

    TreeNode *left = traverse(root->left, remove, inox);
    TreeNode *right = traverse(root->right, remove, inox);

    TreeNode *temp = root;
    root->left = left;
    root->right = right;

    return root;
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::set<int> remove;
    for (auto i : num)
        remove.insert(i);

    std::queue<TreeNode *> inox;
    inox.push(root);

    std::vector<TreeNode *> res;
    while (inox.size())
    {
        auto it = inox.front();
        inox.pop();

        TreeNode *temp = traverse(it, remove, inox);

        if (temp)
            res.push_back(temp);
    }

    // return res;
}