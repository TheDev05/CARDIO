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
        this->left = this > right = NULL;
    }
};

void Levelorder(Node *root, std::vector<std::vector<int>> &num)
{
    if (root == NULL)
        return;
    
    
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    std::vector<std::vector<int>> num;
    Levelorder(root, num);

    for (auto i : num)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}