#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    TreeNode *left, *right;
    int val;

    TreeNode(int temp)
    {
        this->val = temp;
        this->left = this->right = NULL;
    }
};

void traverse(TreeNode *root, std::vector<std::vector<int>> &store)
{
    if (root == NULL)
        return;

    std::deque<TreeNode *> inox;
    inox.push_back(root);

    while (inox.size())
    {
        std::vector<int> temp;
        int size = inox.size();

        for (int i = 0; i < size; i++)
        {
            TreeNode *atom = inox.front();

            if (atom->left != NULL)
                inox.push_back(atom->left);
            if (atom->right != NULL)
                inox.push_back(atom->right);

            temp.push_back(atom->val);
            inox.pop_front();
        }

        store.push_back(temp);
    }

    return;
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    std::vector<std::vector<int>> store;
    traverse(root, store);

    for (auto i : store)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}