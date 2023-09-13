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

bool traverse(TreeNode *root, std::map<int, int> &parent, bool check)
{
    if (root == NULL)
        return false;

    std::queue<TreeNode *> inox;

    inox.push(root);
    if (check == false)
        parent[root->val] = -1;

    while (inox.size())
    {
        int size = inox.size();
        for (int i = 0; i < size; i++)
        {
            auto it = inox.front();
            inox.pop();

            if (it->left)
            {
                if (check == false)
                    parent[it->left->val] = it->val;
                inox.push(it->left);

                if (check && parent[it->left->val] != it->val)
                    return false;
            }

            if (it->right)
            {
                if (check == false)
                    parent[it->right->val] = it->val;
                inox.push(it->right);

                if (check && parent[it->right->val] != it->val)
                    return false;
            }

            if (check)
            {
                if (parent.count(it->val) == false)
                    return false;
                else
                    parent.erase(it->val);
            }
        }
    }

    if (check && parent.size())
        return false;

    return true;
}

int main()
{
    TreeNode *root1 = new TreeNode(6);

    root1->left = new TreeNode(1);
    root1->right = new TreeNode(0);

    TreeNode *root2 = new TreeNode(6);

    root2->right = new TreeNode(1);

    std::map<int, int> parent;
    traverse(root1, parent, false);

    std::cout << traverse(root2, parent, true);
}