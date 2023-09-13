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

int traverse(Node *root, std::map<int, int> &data)
{
    if (root == NULL)
        return 0;

    int val1 = traverse(root->left, data);
    int val2 = traverse(root->right, data);

    data[val1 + val2 + root->val]++;

    return 0;
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    std::map<int, int> data;
    traverse(root, data);

    int max = 0;
    for (auto i : data)
        max = std::max(max, i.second);

    std::vector<int> res;
    for (auto i : data)
        if (i.second == max)
            res.push_back(i.first);

    for (auto i : res)
        std::cout << i << " ";
}