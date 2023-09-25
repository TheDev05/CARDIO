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

TreeNode *bfs(TreeNode *root, std::map<TreeNode *, TreeNode *> &parent, int start)
{
    if (root == NULL)
        return NULL;

    TreeNode *startNode;

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
                inox.push(it->left);
                parent[it->left] = it;
            }

            if (it->right)
            {
                inox.push(it->right);
                parent[it->right] = it;
            }

            if (it->val == start)
                startNode = it;
        }
    }

    return startNode;
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    int start, end;
    std::cin >> start >> end;

    std::map<TreeNode *, TreeNode *> parent;
    TreeNode *startNode = bfs(root, parent, start);

    std::queue<std::pair<TreeNode *, std::string>> inox;
    inox.push({startNode, ""});

    std::string res;
    while (inox.size())
    {
        auto it = inox.front();
        inox.pop();

        TreeNode *temp = it.first;
        std::string text = it.second;

        if (temp->val == end)
        {
            res = text;
            break;
        }

        if (parent[temp])
            inox.push({parent[temp], text + "U"});
        if (temp->left)
            inox.push({temp->left, text + "L"});
        if (temp->right)
            inox.push({temp->right, text + "R"});
    }

    std::cout << res;
}