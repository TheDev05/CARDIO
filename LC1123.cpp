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

std::pair<int, TreeNode *> traverse(TreeNode *root, std::set<TreeNode *> &store)
{
    if (root == NULL)
        return {0, NULL};

    if (store.count(root))
        return {1, root};

    auto it1 = traverse(root->left, store);
    auto it2 = traverse(root->right, store);

    if (it1.first == store.size())
        return it1;
    if (it2.first == store.size())
        return it2;

    return {it1.first + it2.first, root};
}

void LastNodes(TreeNode *root, std::set<TreeNode *> &store)
{
    if (root == NULL)
        return;

    std::queue<TreeNode *> inox;
    inox.push(root);

    while (inox.size())
    {
        int size = inox.size();
        store.clear();

        for (int i = 0; i < size; i++)
        {
            auto it = inox.front();
            inox.pop();

            if (it->left)
                inox.push(it->left);
            if (it->right)
                inox.push(it->right);

            store.insert(it);
        }
    }
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    std::set<TreeNode *> store;
    LastNodes(root, store);

    std::cout << traverse(root, store).second->val;
}