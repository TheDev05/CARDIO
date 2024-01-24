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

bool isPalin(std::map<int, int> &data)
{
    int count = 0;
    for (auto i : data)
        if (i.second & 1)
            count++;

    if (count > 1)
        return false;

    return true;
}

int traverse(TreeNode *root, std::map<int, int> &data)
{
    if (root == NULL)
        return 0;

    data[root->val]++;

    if (root->left == NULL && root->right == NULL)
    {
        if (isPalin(data))
        {
            if (--data[root->val] == 0)
                data.erase(root->val);

            return 1;
        }
    }

    int left = traverse(root->left, data);
    int right = traverse(root->right, data);

    if (--data[root->val] == 0)
        data.erase(root->val);

    return left + right;
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(1);
    root->right = new TreeNode(1);

    std::map<int, int> data;
    std::cout << traverse(root, data);
}