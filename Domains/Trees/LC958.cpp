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
        return false;

    std::queue<TreeNode *> store;
    store.push(root);

    while (store.size())
    {
        int size = store.size();
        bool ok = false;

        for (int i = 0; i < size; i++)
        {
            TreeNode *temp = store.front();
            store.pop();

            if (temp == NULL)
                ok = true;
            else
            {
                if (ok)
                    return false;

                store.push(temp->left);
                store.push(temp->right);
            }
        }
    }

    return true;
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    std::cout << traverse(root);
}