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

void traverse(Node *root, std::map<int, std::map<int, std::vector<int>>> &num, int i, int j)
{
    if (root == NULL)
        return;

    num[i][j].push_back(root->val);
    traverse(root->left, num, i - 1, j + 1);
    traverse(root->right, num, i + 1, j + 1);

    return;
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    std::map<int, std::map<int, std::vector<int>>> num;
    traverse(root, num, 0, 0);

    std::vector<int> result;
    for (auto i : num)
    {
        for (auto j : i.second)
        {
            auto last = j.second.end();
            last--;

            result.push_back(*last);
            break;
        }
    }

    for (auto i : result)
        std::cout << i << " ";
}
