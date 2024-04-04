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

    root->left = new Node(3);
    root->right = new Node(2);

    std::vector<int> list;
    while (root)
    {
        if (root->left)
        {
            Node *temp = root->left;
            while (temp->right && temp->right != root)
            {
                temp = temp->right;
            }

            if (temp->right == NULL)
            {
                temp->right = root;
                root = root->left;
            }
            else if (temp->right == root)
            {
                list.push_back(root->val);

                temp->right = NULL;
                root = root->right;
            }
        }
        else
        {
            list.push_back(root->val);
            root = root->right;
        }
    }

    for (auto i : list)
        std::cout << i << " ";
}