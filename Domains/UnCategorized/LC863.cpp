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

void traverse(TreeNode *root, std::map<TreeNode *, TreeNode *> &parentNode)
{
    if (root == NULL)
        return;

    if (root->left)
        parentNode[root->left] = root;
    if (root->right)
        parentNode[root->right] = root;

    traverse(root->left, parentNode);
    traverse(root->right, parentNode);
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    TreeNode *target = root->left;

    int k;
    std::cin >> k;

    std::map<TreeNode *, TreeNode *> parentNode;
    traverse(root, parentNode);

    parentNode[root] = NULL;

    std::queue<TreeNode *> test;
    test.push(target);

    std::vector<int> res;
    while (test.size() && k >= 0)
    {
        int size = test.size();
        for (int i = 0; i < size; i++)
        {
            TreeNode *temp = test.front();
            test.pop();

            if (k == 0)
                res.push_back(temp->val);

            if (parentNode.contains(parentNode[temp]) && parentNode[temp])
                test.push(parentNode[temp]);

            if (temp->left && parentNode.contains(temp->left))
                test.push(temp->left);
            if (temp->right && parentNode.contains(temp->right))
                test.push(temp->right);

            parentNode.erase(temp);
        }

        k--;
    }

    for (auto i : res)
        std::cout << i << " ";
}