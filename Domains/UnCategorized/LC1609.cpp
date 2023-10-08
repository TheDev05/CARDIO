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

bool traverse(TreeNode *root)
{
    if (root == NULL)
        return true;

    std::queue<TreeNode *> inox;
    inox.push(root);

    int idx = 0;
    while (inox.size())
    {
        int size = inox.size(), prev = 0;
        for (int i = 0; i < size; i++)
        {
            auto it = inox.front();
            inox.pop();

            if (it->left)
                inox.push(it->left);
            if (it->right)
                inox.push(it->right);

            if ((idx & 1) && ((prev && prev <= it->val) || (it->val & 1)))
                return false;
            if (!(idx & 1) && ((prev && prev >= it->val) || !(it->val & 1)))
                return false;

            prev = it->val;
        }

        idx++;
    }

    return true;
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    traverse(root);
}