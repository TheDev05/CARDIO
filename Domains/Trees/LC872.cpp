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

void traverse(TreeNode *root, std::vector<int> &num)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
        num.push_back(root->val);

    traverse(root->left, num);
    traverse(root->right, num);

    return;
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    TreeNode *temp = root;

    std::vector<int> num1, num2;
    traverse(root, num1);
    traverse(temp, num2);

    if (num1 != num2)
        std::cout << "NOT EQUAL";

    std::cout << "EQUAL";
}