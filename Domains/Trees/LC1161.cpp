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

void traverse(TreeNode *root, std::vector<int> &num)
{
    if (root == NULL)
        return;

    std::queue<TreeNode *> inox;
    inox.push(root);

    while (inox.size())
    {
        int size = inox.size(), sum = 0;
        for (int i = 0; i < size; i++)
        {
            TreeNode *temp = inox.front();
            inox.pop();

            if (temp->left != NULL)
                inox.push(temp->left);
            if (temp->right != NULL)
                inox.push(temp->right);

            sum += temp->val;
        }

        num.push_back(sum);
    }
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    std::vector<int> inox;
    traverse(root, inox);

    int max = 0, level = 0;
    for (int i = 0; i < inox.size(); i++)
    {
        if (inox[i] > max)
        {
            max = inox[i];
            level = i;
        }
    }

    std::cout << level;
}