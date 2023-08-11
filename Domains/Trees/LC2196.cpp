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

void traverse(TreeNode *root)
{
    if (root == NULL)
        return;

    std::cout << root->val << "\n";

    traverse(root->left);
    traverse(root->right);
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num;
    for (int i = 0; i < n; i++)
    {
        std::vector<int> temp(3);
        for (auto &j : temp)
            std::cin >> j;

        num.push_back(temp);
    }

    std::map<int, TreeNode *> inox;
    for (int i = 0; i < num.size(); i++)
    {
        int data = num[i][0];
        int child = num[i][1];
        int dir = num[i][2];

        if (inox.count(data) == false)
        {
            TreeNode *temp = new TreeNode(data);
            inox[data] = temp;
        }

        if (inox.count(child) == false)
        {
            TreeNode *temp = new TreeNode(child);
            inox[child] = temp;
        }

        if (dir)
            inox[data]->left = inox[child];
        else
            inox[data]->right = inox[child];
    }

    int local = 0;
    for (int i = 0; i < n; i++)
        inox.erase(num[i][1]);

    traverse(inox.begin()->second);
}