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

void dfs(TreeNode *root, std::vector<int> &num)
{
    if (root == NULL)
        return;

    num.push_back(root->val);

    dfs(root->left, num);
    dfs(root->right, num);
}

TreeNode *traverse(std::vector<int> &num, int left, int right)
{
    if (left >= right)
        return NULL;

    int mid = num[(right + left) / 2];

    TreeNode *temp = new TreeNode(num[mid]);
    temp->left = traverse(num, left, mid - 1);
    temp->right = traverse(num, mid + 1, right);

    return temp;
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    std::vector<int> num;
    dfs(root, num);

    sort(num.begin(), num.end());
    traverse(num, 0, num.size() - 1);
}