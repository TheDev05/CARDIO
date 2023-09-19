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

void traverse(TreeNode *root, std::map<TreeNode *, TreeNode *> &parent, TreeNode *&init, int start)
{
    if (root == NULL)
        return;

    std::queue<TreeNode *> inox;
    inox.push(root);

    while (inox.size())
    {
        int size = inox.size();
        for (int i = 0; i < size; i++)
        {
            auto it = inox.front();
            inox.pop();

            if (it->left)
            {
                parent[it->left] = it;
                inox.push(it->left);
            }

            if (it->right)
            {
                inox.push(it->right);
                parent[it->right] = it;
            }

            if (it->val == start)
                init = it;
        }
    }
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    int start;
    std::cin >> start;

    std::map<TreeNode *, TreeNode *> parent;
    TreeNode *init = NULL;

    traverse(root, parent, init, start);

    std::queue<TreeNode *> inox;
    std::set<TreeNode *> vis;

    inox.push(init);
    vis.insert(init);

    int count = 0;
    while (inox.size())
    {
        int size = inox.size();
        count++;

        for (int i = 0; i < size; i++)
        {
            auto it = inox.front();
            inox.pop();

            if (it->left && vis.count(it->left) == false)
            {
                inox.push(it->left);
                vis.insert(it->left);
            }

            if (it->right && vis.count(it->right) == false)
            {
                inox.push(it->right);
                vis.insert(it->right);
            }

            if (vis.count(parent[it]) == false)
            {
                inox.push(parent[it]);
                vis.insert(parent[it]);
            }
        }
    }

    std::cout << count;
}