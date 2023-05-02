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

void traverse(Node *root, std::vector<std::vector<int>> &num)
{
    if (root == NULL)
        return;

    std::queue<Node *> inox;
    inox.push(root);

    while (inox.size())
    {
        int size = inox.size();
        std::vector<int> atom;

        for (int i = 0; i < size; i++)
        {
            Node *temp = inox.front();
            inox.pop();

            if (temp->left != NULL)
                inox.push(temp->left);
            if (temp->right != NULL)
                inox.push(temp->right);

            atom.push_back(temp->val);
        }

        num.push_back(atom)
    }
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    std::vector<std::vector<int>> num;
    traverse(root, num);

    for (auto i : num)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}