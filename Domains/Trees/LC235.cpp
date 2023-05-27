#include <bits/stdc++.h>
using namespace std;

// Task: Try without using extra variable, direct return the required node

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

int traverse(Node *root, Node *val1, Node *val2, Node *&result)
{
    if (root == NULL)
        return 0;

    int temp1 = 0, temp2 = 0, temp3 = 0;

    temp1 = traverse(root->left, val1, val2, result);
    temp2 = traverse(root->right, val1, val2, result);

    if (root->val == val1->val || root->val == val2->val)
        temp3 = 1;

    if (temp1 + temp2 + temp3 == 2)
        result = root;

    if (temp1 || temp2 || temp3)
        return 1;

    return 0;
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    Node *val1 = new Node(2);
    Node *val2 = new Node(3);

    Node *result = new Node(0);
    traverse(root, val1, val2, result);

    std::cout << result->val;
}