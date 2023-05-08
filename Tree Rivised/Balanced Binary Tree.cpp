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

int traverse(Node*root)
{
    
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    if (traverse(root) == -1)
        std::cout << "NO\n";
    else
        std::cout << "YES\n";
}