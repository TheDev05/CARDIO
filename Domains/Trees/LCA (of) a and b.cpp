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

int traverse(Node *root, std::map<Node *, int> &store, Node *val1)
{
    if (root == NULL)
        return 0;

    if (root == val1)
        return 1;

    store[root]++;

    if (traverse(root->left, store, val1))
        return 1;
    if (traverse(root->right, store, val1))
        return 1;

    store[root]--;
    if (store[root] == 0)
        store.erase(root);

    return 0;
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    std::map<Node *, int> store;

    traverse(root, store, root->left);
    traverse(root, store, root->right);

    int min = INT_MAX;
    Node *result;

    for (auto i : store)
    {
        if (i.second == 2)
        {
            if (i.first->val < min)
            {
                result = i.first;
                min = i.first->val;
            }
        }
    }

    return result;
    std::cout << result->val;
}