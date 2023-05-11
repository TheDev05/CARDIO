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

void left(Node *root, std::vector<int> &store)
{
    if (root == NULL)
        return;

    
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    std::vector<int> store, temp;

    left(root, store);
    leave(root, store);
    right(root, temp);
}