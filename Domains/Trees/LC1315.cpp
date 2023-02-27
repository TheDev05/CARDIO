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

int traverse(Node *root)
{
    if (root == NULL)
        return 0;

    std::queue<Node *> temp;
    temp.push(root);

    int sum = 0;
    while (temp.size())
    {
        int size = temp.size();
        for (int i = 0; i < size; i++)
        {
            Node *local = temp.front();
            temp.pop();

            if (local->val % 2 == 0)
            {
                if (local->left != NULL && local->left->left != NULL)
                    sum += local->left->left->val;
                if (local->left != NULL && local->left->right != NULL)
                    sum += local->left->right->val;

                if (local->right != NULL && local->right->left != NULL)
                    sum += local->right->left->val;
                if (local->right != NULL && local->right->right != NULL)
                    sum += local->right->right->val;
            }

            if (local->left != NULL)
                temp.push(local->left);
            if (local->right != NULL)
                temp.push(local->right);
        }
    }

    return sum;
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    std::cout << traverse(root);
}