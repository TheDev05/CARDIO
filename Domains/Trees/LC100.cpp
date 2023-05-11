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

bool traverse(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL)
        return 1;

    if (root1 == NULL || root2 == NULL)
        return 0;

    if (root1->val != root2->val)
        return 0;

    int temp1 = traverse(root1->left, root2->left);
    int temp2 = traverse(root1->right, root2->right);

    if (std::min(temp1, temp2) == 0)
        return 0;

    return 1;
}

int main()
{
    Node *root1 = new Node(1);

    root1->left = new Node(2);
    root1->right = new Node(3);

    Node *root2 = new Node(1);

    root2->left = new Node(2);
    root2->right = new Node(3);

    if (traverse(root1, root2))
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
}