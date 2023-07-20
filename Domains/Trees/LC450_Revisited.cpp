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

TreeNode *traverse(TreeNode *temp)
{
    if (temp->left == NULL && temp->right == NULL)
        return NULL;

    if (temp->left && temp->right)
    {
        TreeNode *inox = temp->right;
        while (inox->left)
            inox = inox->left;

        inox->left = temp->left;
        return temp->right;
    }
    else if (temp->left)
        return temp->left;
    else
        return temp->right;
}

int main()
{
    TreeNode *root = new TreeNode(2);

    root->left = new TreeNode(1);
    root->right = new TreeNode(3);

    int key;
    std::cin >> key;

    TreeNode *temp = root;
    TreeNode *parent = NULL;

    while (temp)
    {
        if (temp->val == key)
        {
            TreeNode *inox = traverse(temp);

            if (parent->left->val == key)
                parent->left = inox;
            else
                parent->right = inox;

            break;
        }

        parent = temp;

        if (temp->val > key)
            temp = temp->left;
        else
            temp = temp->right;
    }
}