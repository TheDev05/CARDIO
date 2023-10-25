#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};

void traverse(Node *root, std::vector<std::vector<int>> &res)
{
    if (root == NULL)
        return;

    std::queue<Node *> inox;
    inox.push(root);

    while (inox.size())
    {
        int size = inox.size();
        std::vector<int> temp;

        for (int i = 0; i < size; i++)
        {
            auto it = inox.front();
            inox.pop();

            for (int j = 0; j < it->children.size(); j++)
            {
                if (it->children[j])
                    inox.push(it->children[j]);
            }

            temp.push_back(it->val);
        }

        res.push_back(temp);
    }
}

int main()
{
    Node *root = new Node(1);
    root->children = {NULL, new Node(2), NULL};

    std::vector<std::vector<int>> res;
    traverse(root, res);

    for (auto i : res)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}