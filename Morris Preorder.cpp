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

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    std::vector<int> list;
    while (root)
    {
        list.push_back(root->val);

        if (root->left)
        {
            Node *temp = root->left;
            while (temp->right && temp->right != root->right)
            {
                temp = temp->right;
            }

            if (temp->right == NULL)
            {
                temp->right = root->right;
                root = root->left;
            }
            else if (temp->right == root->right)
            {
                temp->right = NULL;
                root = root->right;
            }
        }
        else
            root = root->right;
    }
}