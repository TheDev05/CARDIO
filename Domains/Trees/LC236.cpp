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

Node *traverse(Node *root, Node *left, Node *right)
{
    if (root == NULL)
        return root;

    Node *temp1 = NULL, *temp2 = NULL;
    temp1 = traverse(root->left, root->left, root->right);
    temp2 = traverse(root->right, root->left, root->right);

    bool ok = false;
    if (root->val == left->val || root->val == right->val)
        ok = true;

    if (temp1 != NULL && temp2 != NULL)
        return root;
    if ((temp1 != NULL && ok) || (temp2 != NULL && ok))
        return root;
    if (temp1 == NULL && temp2 == NULL && ok)
        return root;

    return temp1;
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    std::cout << traverse(root, root->left, root->right)->val;
}