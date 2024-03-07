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
        int size = inox.size();
        std::vector<int> temp;

        for (int i = 0; i < size; i++)
        {
            auto it = inox.front();
            inox.pop();

            std::cout << it->val << " ";

            if (idx & 1)
            {
                if (it->val & 1)
                    return false;

                if (temp.size() && it->val > temp.back())
                    return false;
            }
            else
            {
                if (it->val % 2 == 0)
                    return false;

                if (temp.size() && it->val < temp.back())
                    return false;
            }

            if (it->left)
                inox.push(it->left);
            if (it->right)
                inox.push(it->right);

            temp.push_back(it->val);
        }

        idx++;
    }

    return true;
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(8);
    root->right = new TreeNode(5);

    std::cout << traverse(root);
}