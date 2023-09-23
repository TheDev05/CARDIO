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

int traverse(TreeNode *root, int key)
{
    if (root == NULL)
        return 0;

    std::queue<TreeNode *> inox;
    std::multiset<int> data;

    inox.push(root);
    while (inox.size())
    {
        int size = inox.size(), sum = 0;
        for (int i = 0; i < size; i++)
        {
            auto it = inox.front();
            inox.pop();

            if (it->left)
                inox.push(it->left);
            if (it->right)
                inox.push(it->right);

            sum += it->val;
        }

        data.insert(sum);
    }

    return *std::next(data.begin(), key);
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    int key;
    std::cin >> key;

    traverse(root, key);
}