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

int traverse(Node *root, int &count, int &sum)
{
    if (root == NULL)
        return 0;
    else
        count++;

    int temp = count;

    int left = traverse(root->left, count, sum);
    int right = traverse(root->right, count, sum);

    int total = left + right + root->val;
    int delta = (count - temp) + 1;

    if (delta != 0 && total / delta == root->val)
        sum++;

    return left + right + root->val;
}

int main()
{
    Node *root = new Node(4);

    root->left = new Node(8);
    root->left->left = new Node(0);
    root->left->right = new Node(1);

    root->right = new Node(5);
    root->right->right = new Node(6);

    int sum = 0, count = 0;
    traverse(root, count, sum);

    std::cout << sum;
}