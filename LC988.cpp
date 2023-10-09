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

std::string traverse(TreeNode *root, int prev)
{
    if (root == NULL)
        return "";

    std::string temp;
    temp = (char)('a' + root->val);

    if (root->left == NULL && root->right == NULL)
        return temp;

    std::string left = traverse(root->left, root->val);
    std::string right = traverse(root->right, root->val);

    if (left.empty())
        return right + temp;
    if (right.empty())
        return left + temp;

    left += temp;
    right += temp;

    for (int i = 0; i < std::min(left.size(), right.size()); i++)
    {
        if (left[i] < right[i])
            return left;
        if (right[i] < left[i])
            return right;
    }

    if (left.size() > right.size())
    {
        if (left[right.size()] < (char)('a' + prev))
            return left;
        return right;
    }
    else
    {
        if (right[left.size()] < (char)('a' + prev))
            return right;
        return left;
    }

    return left;
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    std::cout << traverse(root, 0);
}