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

void traverse(Node *root, int &delta, int &max, int &min)
{
    if (root == NULL)
        return;

    if (max >= 0)
    {
        delta = std::max(delta, abs(max - (root->val)));
        delta = std::max(delta, abs(min - (root->val)));
    }

    int temp1 = max, temp2 = min;
    max = std::max(max, root->val);
    min = std::min(min, root->val);

    traverse(root->left, delta, max, min);
    traverse(root->right, delta, max, min);

    max = temp1;
    min = temp2;

    return;
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    int delta = 0, max = -1, min = INT_MAX;
    traverse(root, delta, max, min);

    std::cout << delta << '\n';
}