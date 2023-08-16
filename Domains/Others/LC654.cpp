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

TreeNode *traverse(std::vector<int> &num, int left, int right)
{
    int index = 0, max = 0;
    for (int i = left; i <= right; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
            index = i;
        }
    }

    TreeNode *root = new TreeNode(max);
    root->left = traverse(num, 0, index - 1);
    root->right = traverse(num, index + 1, num.size() - 1);

    return root;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    traverse(num, 0, num.size() - 1);
}