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

std::vector<int> traverse(TreeNode *root)
{
    if (root == NULL)
        return {};

    std::vector<int> temp;
    temp = traverse(root->left);

    temp.push_back(root->val);
    std::vector<int> temp2 = traverse(root->right);

    temp.insert(temp.end(), temp2.begin(), temp2.end());

    return temp;
}

TreeNode *reConstruct(std::vector<int> &num, int left, int right)
{
    int max = 0, index = 0;
    for (int i = left; i <= right; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
            index = i;
        }
    }

    TreeNode *leftSide = reConstruct(num, left, index - 1);
    TreeNode *rightSide = reConstruct(num, index + 1, right);

    TreeNode *root = new TreeNode(max);
    root->left = leftSide;
    root->right = rightSide;

    return root;
}

int main()
{
    TreeNode *root = new TreeNode(5);

    root->left = new TreeNode(6);
    root->right = new TreeNode(1);

    int val;
    std::cin >> val;

    std::vector<int> num;
    num = traverse(root);
    num.push_back(val);

    root = reConstruct(num, 0, num.size() - 1);

    for (auto i : num)
        std::cout << i << " ";
}