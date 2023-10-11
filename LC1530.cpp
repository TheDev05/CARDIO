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

void traverse(TreeNode *root, std::vector<TreeNode *> &num, std::map<TreeNode *, TreeNode *> &parent)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
        num.push_back(root);

    if (root->left)
        parent[root->left] = root;
    if (root->right)
        parent[root->right] = root;

    traverse(root->left, num, parent);
    traverse(root->right, num, parent);
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    int k;
    std::cin >> k;

    std::vector<TreeNode *> num;
    std::map<TreeNode *, TreeNode *> parent;

    traverse(root, num, parent);

    int sum = 0;
    std::set<TreeNode *> vis;

    for (int i = 0; i < num.size(); i++)
    {
        std::queue<TreeNode *> inox;
        inox.push(num[i]);

        int count = 0;
        while (inox.size())
        {
            int size = inox.size();
            for (int j = 0; j < size; j++)
            {
                auto it = inox.front();
                vis.insert(it);

                inox.pop();

                if (it->left && vis.count(it->left) == false)
                    inox.push(it->left);
                if (it->right && vis.count(it->right) == false)
                    inox.push(it->right);
                if (parent.count(it) && vis.count(parent[it]) == false)
                    inox.push(parent[it]);

                if (k <= count)
                    sum++;
            }

            count++;
        }
    }

    std::cout << sum;
}