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

int traverse(Node *root, std::vector<int> &num, int n)
{
    if (root == NULL)
        return 0;

    num.push_back(root->val);
    if (root->val == n)
        return 1;

    if (traverse(root->left, num, n))
        return 1;
    if (traverse(root->right, num, n))
        return 1;

    num.pop_back();
    return 0;
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    int n;
    std::cin >> n;

    std::vector<int> num;
    traverse(root, num, n);

    for (auto i : num)
        std::cout << i << " ";
}