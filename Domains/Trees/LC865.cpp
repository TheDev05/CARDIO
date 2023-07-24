#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left, *right;

    TreeNode(int temp)
    {
        this->left = this->right = NULL;
        this->val = temp;
    }
};

void traverse(TreeNode *root, std::map<TreeNode *, TreeNode *> &parent, std::queue<TreeNode *> &temp)
{
    if (root == NULL)
        return;

    std::queue<TreeNode *> inox;
    inox.push(root);

    while (inox.size())
    {
        int size = inox.size();
        std::queue<TreeNode *> atom;

        for (int i = 0; i < size; i++)
        {
            TreeNode *dash = inox.front();
            inox.pop();

            if (dash->left)
            {
                parent[dash->left] = dash;
                inox.push(dash->left);
                atom.push(dash->left);
            }

            if (dash->right)
            {
                parent[dash->right] = dash;
                inox.push(dash->right);
                atom.push(dash->right);
            }
        }

        if (atom.size())
            temp = atom;
    }
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    std::map<TreeNode *, TreeNode *> parent;
    std::queue<TreeNode *> temp;

    traverse(root, parent, temp);

    while (temp.size())
    {
        int size = temp.size();
        if (size == 1)
        {
            std::cout << temp.front()->val;
            break;
        }

        std::set<int> skip;
        for (int i = 0; i < size; i++)
        {
            TreeNode *dash = temp.front();
            temp.pop();

            TreeNode *atom = parent[dash];
            if (skip.count(atom->val) == false)
            {
                temp.push(atom);
                skip.insert(atom->val);
            }
        }
    }
}