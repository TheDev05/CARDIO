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

void traverse(std::vector<int> &store, Node *root)
{
    std::stack<Node *> temp;
    Node *curr = root;

    while (curr || temp.size())
    {
        if (curr == NULL)
        {
            store.push_back(temp.top()->val);
            curr = temp.top()->right;

            temp.pop();
        }
        else
        {
            temp.push(curr);
            curr = curr->left;
        }
    }
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    std::vector<int> store;
    traverse(store, root);

    for (auto i : store)
        std::cout << i << " ";
}