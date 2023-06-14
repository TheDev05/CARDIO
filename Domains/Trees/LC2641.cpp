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

void dfs(TreeNode *root, std::map<int, int> &data, int index)
{
    if (root == NULL)
        return;

    data[index] += root->val;

    dfs(root->left, data, index + 1);
    dfs(root->right, data, index + 1);

    return;
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    std::map<int, int> data;
    dfs(root, data, 0);

    for (auto i : data)
        std::cout << i.first << " " << i.second << '\n';

    int index = 0;
    std::queue<TreeNode *> inox;

    inox.push(root);
    while (inox.size())
    {
        int size = inox.size();
        for (int i = 0; i < size; i++)
        {
            TreeNode *temp = inox.front();
            inox.pop();

            int sum = 0;
            if (temp->left != NULL)
            {
                inox.push(temp->left);
                sum += temp->left->val;
            }

            if (temp->right != NULL)
            {
                inox.push(temp->right);
                sum += temp->right->val;
            }

            if (temp->left != NULL)
                temp->left->val = data[index + 1] - sum;
            if (temp->right != NULL)
                temp->right->val = data[index + 1] - sum;
        }

        index++;
    }

    std::cout << root->val << " " << root->left->val << " " << root->right->val;
}