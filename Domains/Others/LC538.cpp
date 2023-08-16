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

int traverse(Node *root)
{
    if (root == NULL)
        return 0;

    int left = traverse(root->left);
    int right = traverse(root->right);

    root->val = root->val + right;
    return left + root->val;
}

int main()
{
    Node *root = new Node(2);

    root->left = new Node(1);
    root->right = new Node(3);

    std::stack<Node *> inox;
    inox.push(root);

    while (inox.size())
    {
        Node *temp = inox.top();
        if (temp->right)
        {
            while (temp->right)
                inox.push(temp->right);
        }
        else if (temp->left)
            inox.push(temp->left);
    }

    std::cout << root->val << '\n';
    std::cout << root->left->val << " " << root->right->val << '\n';
}