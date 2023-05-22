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

void traverse(Node *root, std::map<int, int> &store, int level)
{
    if (root == NULL)
        return;

    if (store.count(level) == false)
        store[level] = root->val;

    traverse(root->right, store, level + 1);
    traverse(root->left, store, level + 1);
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    std::vector<int> num;
    std::map<int, int> store;

    traverse(root, store, 0);
    for (auto i : store)
        num.push_back(i.second);
}