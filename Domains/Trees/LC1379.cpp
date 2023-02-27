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

Node *traverse(Node *root, Node *clone, Node *target)
{
    if (root == NULL)
        return NULL;

    if (clone->val == target->val)
        return clone;

    Node *val1 = traverse(root->left, clone->left, target);
    Node *val2 = traverse(root->right, clone->right, target);

    if (val1 != NULL)
        return val1;
    else if (val2 != NULL)
        return val2;

    return NULL;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    Node *clone = new Node(1);
    clone->left = new Node(2);
    clone->right = new Node(3);

    Node *val = new Node(3);

    std::cout << traverse(root, clone, val);
}