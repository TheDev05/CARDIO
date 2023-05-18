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

int traverse(Node *root, std::map<Node *, int> &store, int toggle)
{
    if (root == NULL)
        return 0;

    if (store.count(root) == false)
    {
        int val1 = 1 + traverse(root->left, store, 0);
        int val2 = 1 + traverse(root->right, store, 1);

        int result = 0;

        if (toggle == -1)
            result = std::max(val1, val2) - 1;
        else if (toggle == 0)
            result = val2;
        else
            result = val1;

        store[root] = result;
    }

    return store[root];
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->left->right = new Node(4);

    Node *inox = NULL;
    std::map<Node *, int> store;

    std::cout << traverse(root, store, -1);
}