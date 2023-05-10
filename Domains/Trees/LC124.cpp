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

int traverse(Node *root, int &sum)
{
    if (root == NULL)
        return 0;

    int left = traverse(root->left, sum);
    int right = traverse(root->right, sum);
    sum = std::max(sum, root->val);

    if (left > 0 && right > 0)
        sum = std::max(sum, root->val + left + right);
    else if (left > 0)
        sum = std::max(sum, root->val + left);
    else if (right > 0)
        sum = std::max(sum, root->val + right);

    if (std::max(left, right) > 0)
        return std::max(left, right) + root->val;
    else
        return root->val;
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    int sum = 0;
    traverse(root, sum);

    std::cout << sum << '\n';
}