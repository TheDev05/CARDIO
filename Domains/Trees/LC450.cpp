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

TreeNode *read(TreeNode *root)
{
    if (root->left == NULL && root->right == NULL)
        return NULL;

    if (root->left != NULL && root->right != NULL)
    {
        TreeNode *temp = root->right;
        while (temp->left)
            temp = temp->left;

        temp->left = root->left;
        return temp;
    }
    else if (root->left != NULL)
        return root->left;
    else
        return root->right;
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    int key;
    std::cin >> key;

    TreeNode *temp = root;

    if (key = temp->val)
        return read(temp);

    while (temp)
    {
        if (temp->val < key)
        {
            if (temp->right && temp->right->val == key)
            {
                temp->right = read(temp->right);
                break;
            }
            else
                temp = temp->right;
        }
        else
        {
            if (temp->left && temp->left->val == key)
            {
                temp->left = read(temp->left);
                break;
            }
            else
                temp = temp->left;
        }
    }
}