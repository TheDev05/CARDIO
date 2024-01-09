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

void traverse(Node *root, std::vector<int> &num)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
        num.push_back(root->val);

    traverse(root->left, num);
    traverse(root->right, num);

    return;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    Node *temp = root;

    std::vector<int> num1, num2;
    traverse(root, num1);
    traverse(temp, num2);

    if (num1 != num2)
        std::cout << "NOT EQUAL";

    std::cout << "EQUAL";
}