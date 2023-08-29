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

int traverse(TreeNode *root, std::map<int, int> &data, int &count)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
    {
        int even = 0, odd = 0;
        for (auto i : data)
            if (i.second & 1)
                odd++;
            else
                even++;

        if (odd < 2)
            count++;
    }

    data[root->val]++;

    traverse(root->left, data, count);
    traverse(root->right, data, count);

    return 0;
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    std::map<int, int> data;

    int count = 0;
    traverse(root, data, count);

    std::cout << count;
}