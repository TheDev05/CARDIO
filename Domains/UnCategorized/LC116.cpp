#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left, *right, *next;

    Node(int temp)
    {
        this->val = temp;
        this->left = this->right = this->next = NULL;
    }
};

void traverse(Node *root)
{
    if (root == NULL)
        return;

    std::queue<Node *> inox;
    inox.push(root);

    while (inox.size())
    {
        int size = inox.size();
        Node *local = NULL;

        for (int i = 0; i < size; i++)
        {
            auto it = inox.front();
            inox.pop();

            if (it->left)
                inox.push(it->left);
            if (it->right)
                inox.push(it->right);
            if (local)
                local->next = it;

            local = it;
        }
    }
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    traverse(root);
}