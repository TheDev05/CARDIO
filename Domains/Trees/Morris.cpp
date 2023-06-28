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

void traverse(Node *root, std::vector<int> &num)
{
    if (root == NULL)
        return;

    Node *current = root;
    while (current)
    {
        if (current->left)
        {
            Node *temp = current->left;
            while (temp->right && temp->right != current)
                temp = temp->right;

            if (temp->right == NULL)
            {
                temp->right = current;
                current = current->left;
            }
            else
            {
                num.push_back(current->data);

                current = current->right;
                temp->right = NULL;
            }
        }
        else
        {
            num.push_back(current->data);
            current = current->right;
        }
    }
}

int main()
{
    Node *root = new Node(2);

    root->left = new Node(1);
    root->right = new Node(3);

    std::vector<int> num;
    traverse(root, num);

    for (auto i : num)
        std::cout << i << " ";
}