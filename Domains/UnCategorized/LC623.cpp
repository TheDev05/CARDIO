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

void traverse(TreeNode *root, int val, int depth)
{
    if (root == NULL)
        return;

    std::queue<TreeNode *> inox;
    inox.push(root);

    int count = 1;
    while (inox.size())
    {
        int size = inox.size();
        for (int i = 0; i < size; i++)
        {
            auto it = inox.front();
            inox.pop();

            TreeNode *temp1 = it->left;
            TreeNode *temp2 = it->right;

            if (count == depth - 1)
            {
                it->left = new TreeNode(val);
                it->left->left = temp1;

                it->right = new TreeNode(val);
                it->right->right = temp2;
            }

            if (temp1)
                inox.push(it->left->left);
            if (temp2)
                inox.push(temp2);
        }
    }
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    int val, depth;
    std::cin >> val >> depth;

    if (depth == 1)
    {
        TreeNode *temp = new TreeNode(val);
        temp->left = root;
        temp->right = NULL;
    }

    traverse(root, val, depth);
}