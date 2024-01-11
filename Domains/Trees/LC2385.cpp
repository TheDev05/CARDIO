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

TreeNode *traverse(TreeNode *root, int key, std::map<TreeNode *, TreeNode *> &data)
{
    if (root == NULL)
        return NULL;

    if (root->left)
        data[root->left] = root;
    if (root->right)
        data[root->right] = root;

    TreeNode *temp = NULL;
    if (key == root->val)
        temp = root;

    TreeNode *left = traverse(root->left, key, data);
    TreeNode *right = traverse(root->right, key, data);

    return (temp ? temp : left ? left
                      : right  ? right
                               : NULL);
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    int key;
    std::cin >> key;

    std::map<TreeNode *, TreeNode *> data;
    TreeNode *target = traverse(root, key, data);

    std::queue<TreeNode *> inox;
    inox.push(target);

    int count = 0;
    while (inox.size())
    {
        int size = inox.size();
        for (int i = 0; i < size; i++)
        {
            auto it = inox.front();
            inox.pop();

            if (data.contains(it))
                inox.push(data[it]);

            if (it->left && data.contains(it))
                inox.push(it->left);
            if (it->right && data.contains(it))
                inox.push(it->right);

            data.erase(it);
        }

        count++;
    }

    std::cout << count;
}