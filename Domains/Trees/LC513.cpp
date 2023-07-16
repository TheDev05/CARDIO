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

int traverse(TreeNode *root)
{
    if (root == NULL)
        return -1;

    std::queue<TreeNode *> qt;

    qt.push(root);
    int inox = root->val;

    while (qt.size())
    {
        int size = qt.size();
        inox = qt.front()->val;

        for (int i = 0; i < size; i++)
        {
            TreeNode *temp = qt.front();
            qt.pop();

            if (temp->left)
                qt.push(temp->left);
            if (temp->right)
                qt.push(temp->right);
        }
    }

    return inox;
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    std::cout << traverse(root);
}