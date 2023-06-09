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

void traverse(TreeNode *root, int &max)
{
    if (root == NULL)
        return;

    std::queue<std::pair<TreeNode *, int>> inox;
    inox.push({root, 1});

    while (inox.size())
    {
        int size = inox.size(), left = -1, right = -1;
        for (int i = 0; i < size; i++)
        {
            TreeNode *temp = inox.front().first;
            int val = inox.front().second;
            inox.pop();

            if (temp->left != NULL)
            {
                if (left == -1)
                    left = val * 2;
                right = val * 2;

                inox.push({temp->left, (val * 2) - left});
            }

            if (temp->right != NULL)
            {
                if (left == -1)
                    left = (val * 2) + 1;
                right = (val * 2) + 1;

                inox.push({temp->right, ((val * 2) + 1) - left});
            }
        }

        max = std::max(max, abs(left - right) + 1);
    }
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    int max = 1;

    traverse(root, max);
    std::cout << max;
}