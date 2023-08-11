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

void traverse(TreeNode *root, std::vector<int> &num, int count)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
        num.push_back(count - 1);

    traverse(root->left, num, count + 1);
    traverse(root->right, num, count + 1);

    return;
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->left->right = new TreeNode(4);

    root->right = new TreeNode(3);

    int dist;
    std::cin >> dist;

    std::vector<int> num;
    traverse(root, num, 1);

    std::sort(num.begin(), num.end());

    int count = 0;
    for (int i = 0; i < num.size(); i++)
    {
        for (int j = i + 1; j < num.size(); j++)
        {
            if (num[i] + num[j] <= dist)
                count++;
            else
                break;
        }
    }

    std::cout << count;
}