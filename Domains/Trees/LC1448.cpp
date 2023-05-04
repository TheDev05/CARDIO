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

void traverse(Node *root, int max, int &count)
{
    if (root == NULL)
        return;

    if (root->val >= max)
        count++;

    int temp = max;

    traverse(root->left, std::max(max, root->val), count);
    traverse(root->right, std::max(max, root->val), count);

    max = temp;

    return;
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    int count = 0;
    traverse(root, root->val, count);

    std::cout << count;
}