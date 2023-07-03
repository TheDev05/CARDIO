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

void traverse(TreeNode *root, std::vector<std::vector<int>> &store)
{
    if (root == NULL)
        return;

    std::queue<TreeNode *> qt;
    qt.push(root);

    while (qt.size())
    {
        int size = qt.size();
        std::vector<int> temp;

        for (int i = 0; i < size; i++)
        {
            TreeNode *inox = qt.front();
            qt.pop();

            if (inox->left)
                qt.push(inox->left);
            if (inox->right)
                qt.push(inox->right);

            temp.push_back(inox->val);
        }

        store.push_back(temp);
    }
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    std::vector<std::vector<int>> store, result;
    traverse(root, store);

    for (int i = 0; i < store.size(); i++)
    {
        result.push_back(store[store.size() - 1 - i]);
    }
}