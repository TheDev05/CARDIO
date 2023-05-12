#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int temp)
    {
        this->data = temp;
        this->left = this->right = NULL;
    }
};

void LeftTraversal(Node *root, std::vector<int> &store)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
        return;

    store.push_back(root->data);

    if (root->left != NULL)
        LeftTraversal(root->left, store);
    else if (root->right != NULL)
        LeftTraversal(root->right, store);
}

void RightTraversal(Node *root, std::vector<int> &store)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
        return;

    store.push_back(root->data);

    if (root->right != NULL)
        RightTraversal(root->right, store);
    else if (root->left != NULL)
        RightTraversal(root->left, store);
}

void LeafTraversal(Node *root, std::vector<int> &store)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
        store.push_back(root->data);

    LeafTraversal(root->left, store);
    LeafTraversal(root->right, store);
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    std::vector<int> store, temp;

    store.push_back(root->data);

    LeftTraversal(root->left, store);
    LeafTraversal(root, store);
    RightTraversal(root->right, temp);

    reverse(temp.begin(), temp.end());

    for (auto i : temp)
        store.push_back(i);
}