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

void bfs(TreeNode *root, std::set<int> &num)
{
    if (root == NULL)
        return;

    std::queue<TreeNode *> qt;
    qt.push(root);

    while (qt.size())
    {
        int size = qt.size();
        num.clear();

        for (int i = 0; i < size; i++)
        {
            TreeNode *temp = qt.front();
            qt.pop();

            if (temp->left != NULL)
                qt.push(temp->left);
            if (temp->right != NULL)
                qt.push(temp->right);

            num.insert(temp->val);
        }
    }
}

TreeNode *traverse(TreeNode *root, std::set<int> &num)
{
    if (root == NULL)
        return root;

    TreeNode *temp1 = NULL;
    TreeNode *temp2 = NULL;
    TreeNode *temp3 = NULL;

    temp1 = traverse(root->left, num);
    temp2 = traverse(root->right, num);

    if (num.count(root->val))
        temp3 = root;

    if (temp1 != NULL && temp2 != NULL || temp1 != NULL && temp3 != NULL || temp2 != NULL && temp3 != NULL)
        return root;

    if (temp1 != NULL)
        return temp1;

    if (temp2 != NULL)
        return temp2;

    if (temp3 != NULL)
        return temp3;

    return NULL;
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    std::set<int> num;

    bfs(root, num);
    std::cout << traverse(root, num)->val;

    // for (auto i : num)
    //     std::cout << i << " ";
}