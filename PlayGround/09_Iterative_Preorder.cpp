#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int temp)
    {
        this->val = temp;
        this->left = this->right = NULL;
    }
};

void Preorder(std::vector<int> &num, Node *root)
{
    if (root == NULL)
        return;
    
    std::queue<int>q;
    q.push()
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    std::vector<int> num;
    Preorder(num, root);

    for (auto i : num)
        std::cout << i << " ";
}