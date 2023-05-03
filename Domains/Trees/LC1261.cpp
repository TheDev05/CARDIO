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

void BFS(TreeNode *root, std::vector<std::vector<int>> &store)
{
    if (root == NULL)
        return;

    std::queue<TreeNode *> inox;
    inox.push(root);

    for (int i = 0; inox.size(); i++)
    {
        int size = inox.size();
        std::vector<TreeNode *> temp;

        for (int i = 0; i < size; i++)
        {
            TreeNode *atom = inox.front();

            if (atom->left != NULL)
                inox.push(atom->left);
            if (atom->right != NULL)
                inox.push(atom->right);

            temp.push_back(atom);
            inox.pop();
        }

        if (i & 1)
        {
            for (int j = 0; j < temp.size() / 2; j++)
            {
                TreeNode *alpha = temp[j];
                TreeNode *beta = temp[temp.size() - 1 - j];

                int dot = alpha->val;
                alpha->val = beta->val;
                beta->val = dot;
            }
        }
    }
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    std::vector<std::vector<int>> store;
    BFS(root, store);

    for (auto i : store)
    {
        for (auto j : i)
            std::cout << j << " ";

        std::cout << '\n';
    }
}