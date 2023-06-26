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

void pushLeft(TreeNode *root, std::stack<TreeNode *> &left)
{
    if (root == NULL)
        return;

    while (root)
    {
        left.push(root);
        root = root->left;
    }
}

void pushRight(TreeNode *root, std::stack<TreeNode *> &right)
{
    if (root == NULL)
        return;

    while (root)
    {
        right.push(root);
        root = root->right;
    }
}

int main()
{
    TreeNode *root = new TreeNode(2);

    root->left = new TreeNode(1);
    root->right = new TreeNode(3);

    int key;
    std::cin >> key;

    std::stack<TreeNode *> left, right;

    pushLeft(root, left);
    pushRight(root, right);

    bool ok = false;
    while (std::min(left.size(), right.size()))
    {
        TreeNode *val1 = left.top();
        TreeNode *val2 = right.top();

        if (val1->val >= val2->val)
            break;

        int sum = val1->val + val2->val;
        if (sum == key)
        {
            ok = true;
            break;
        }
        else if (sum < key)
        {
            left.pop();
            pushLeft(val1->right, left);
        }
        else
        {
            right.pop();
            pushRight(val2->left, right);
        }
    }

    if (ok)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
}