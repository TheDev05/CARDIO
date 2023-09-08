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

std::pair<int, int> traverse(TreeNode *root, int &sum)
{
    if (root == NULL)
        return {0, 0};

    auto val1 = traverse(root->left, sum);
    auto val2 = traverse(root->right, sum);

    int need = 1 + val1.second + val2.second, extra = 0;
    int store = val1.first + val2.first + root->val;

    if (store <= need)
        need = need - store;
    else
    {
        extra = store - need;
        need = 0;
    }

    sum += extra + need;
    return {extra, need};
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(1);
    root->right = new TreeNode(1);

    int sum = 0;
    traverse(root, sum);

    std::cout << sum;
}