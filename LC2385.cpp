#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left, *right;

    Node(int temp)
    {
        this->val = temp;
        this->left = this->right = NULL;
    }
};

void traverse(Node *root, std::queue<Node *> &inox, std::map<Node *, Node *> &parent, int start)
{
    if (root == NULL)
        return;

    if (root->val == start)
        inox.push(root);

    traverse(root->left, inox, start);
    traverse(root->right, inox, start);
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    int start;
    std::cin >> start;

    std::queue<Node *> inox;
    traverse(root, inox, start);
}