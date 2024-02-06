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

int traverse(TreeNode *root, int index)
{
    if (root == NULL)
        return 0;

    std::queue<TreeNode *> inox;
    std::map<TreeNode *, int> temp;

    inox.push(root);
    temp[root] = 1;

    int max = 0;
    while (inox.size())
    {
        int size = inox.size();
        int min = 0, left = -1, right = -1;

        for (int i = 0; i < size; i++)
        {
            auto it = inox.front();
            inox.pop();

            std::cout << temp[it] << " ";

            if (it->left)
            {
                inox.push(it->left);
                if (min == 0)
                    min = temp[it] * 2;

                temp[it->left] = (temp[it] * 2) - min;
            }

            if (it->right)
            {
                inox.push(it->right);
                temp[it->right] = ((temp[it] * 2) + 1) - min;
            }

            if (left == -1)
                left = temp[it];
            right = temp[it];
        }

        max = std::max(max, (right - left) + 1);
    }

    return max;
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    std::cout << traverse(root, 1);
}