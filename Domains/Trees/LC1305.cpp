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

void traverse(Node *root1, Node *root2, std::vector<int> &store)
{
    if (root1 == NULL && root2 == NULL)
        return;

    std::queue<Node *> num;

    num.push(root1);
    num.push(root2);

    while (num.size())
    {
        int size = num.size();
        for (int i = 0; i < size; i++)
        {
            Node *temp = num.front();
            num.pop();

            if (temp->left != NULL)
                num.push(temp->left);
            if (temp->right != NULL)
                num.push(temp->right);

            store.push_back(temp->val);
        }
    }
}

int main()
{
    Node *root1 = new Node(1);

    root1->left = new Node(2);
    root1->right = new Node(3);

    Node *root2 = new Node(5);

    root2->left = new Node(6);
    root2->right = new Node(7);

    std::vector<int> store;
    traverse(root1, root2, store);

    std::sort(store.begin(), store.end());

    for (auto i : store)
        std::cout << i << " ";
}