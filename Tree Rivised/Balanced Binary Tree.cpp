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

    if (std::min(left, right) == -1)
        return -1;

    if (abs(left - right) > 1)
        return -1;

    return 1 + std::max(left, right);
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    if (traverse(root) == -1)
        std::cout << "NO\n";
    else
        std::cout << "YES\n";
}