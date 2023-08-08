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

void traverse(Node *root)
{
    if (root == NULL)
        return;

    Node *curr = root;

    while (curr)
    {
        if (curr->left)
        {
            Node *temp = curr->left;
            while (temp->right && temp->right != curr)
                temp = temp->right;

            if (temp->right == curr)
            {
                num.push_back(curr->data);

                curr = curr->right;
                temp->right = NULL;
            }
            else
            {
                temp->right = curr;
                curr = curr->left;
            }
        }
        else
        {
            num.push_back(curr->data);
            curr = curr->right;
        }
    }
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    traverse(root);
}