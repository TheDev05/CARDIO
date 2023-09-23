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

void traverse(TreeNode *root, std::vector<std::vector<int>> &res, std::vector<int> &temp, int sum)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL && sum == 0)
        res.push_back(temp);

    temp.push_back(root->val);
    traverse(root->left, res, temp, sum - root->val);
    traverse(root->right, res, temp, sum - root->val);
    temp.pop_back();
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    int target;
    std::cin >> target;

    std::vector<std::vector<int>> res;
    std::vector<int> temp;

    traverse(root, res, temp, target);
}