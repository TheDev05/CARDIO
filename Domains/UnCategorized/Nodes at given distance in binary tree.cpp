#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int temp)
    {
        this->left = this->right = NULL;
        this->data = temp;
    }
};

void bfs(Node *root, int target, std::map<Node *, Node *> &parent, Node *&temp)
{
    if (root == NULL)
        return;

    std::queue<Node *> inox;
    inox.push(root);

    while (inox.size())
    {
        int size = inox.size();
        for (int i = 0; i < size; i++)
        {
            auto it = inox.front();
            inox.pop();

            if (it->left)
                inox.push(it->left), parent[it->left] = it;
            if (it->right)
                inox.push(it->right), parent[it->right] = it;

            if (it->data == target)
                temp = it;
        }
    }
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    int target;
    std::cin >> target;

    int k;
    std::cin >> k;

    Node *temp = NULL;
    std::map<Node *, Node *> parent;

    bfs(root, target, parent, temp);

    std::set<int> vis;
    std::queue<Node *> inox;
    inox.push(temp);

    int count = 0;
    std::vector<int> res;

    while (inox.size())
    {
        int size = inox.size();
        for (int i = 0; i < size; i++)
        {
            auto it = inox.front();
            inox.pop();

            if (it && it->left && vis.count(it->left->data) == false)
                inox.push(it->left), vis.insert(it->left->data);

            if (it && it->right && vis.count(it->right->data) == false)
                inox.push(it->right), vis.insert(it->right->data);

            if (parent.count(it) && vis.count(parent[it]->data) == false)
                inox.push(parent[it]), vis.insert(parent[it]->data);

            if (count == k)
                res.push_back(it->data);
        }

        count++;
    }

    for (auto i : res)
        std::cout << i << " ";
}