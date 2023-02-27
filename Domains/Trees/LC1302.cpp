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

int traverse(Node *root, std::map<int, int> &data, int level)
{
    if (root == NULL)
        return 0;

    data[level] += root->val;

    traverse(root->left, data, level + 1);
    traverse(root->right, data, level + 1);

    return 0;
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    std::map<int, int> data;
    traverse(root, data, 0);

    std::cout << data.rbegin()->second;
}