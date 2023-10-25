#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left, *right;

    TreeNode(int temp)
    {
        this->val = temp;
        this->left = this->right = NULL;
    }
};

// node, dist
std::pair<int, int> traverse(TreeNode *root, std::map<int, int> &data)
{
    std::pair<int, int> left, right;
    int dist = 1;

    if (root->left)
    {
        left = traverse(root->left, data),
        data[left.first] = std::max(data[left.first], left.second);

        if (left.first == root->val)
            dist = std::max(left.second + 1, dist);
    }

    if (root->right)
    {
        right = traverse(root->right, data);
        data[right.first] = std::max(data[right.first], right.second);

        if (right.first == root->val)
            dist = std::max(right.second + 1, dist);
    }

    if (root->left && root->right && left.first == right.first && left.first == root->val)
        dist = std::max(dist, left.second + right.second + 1);

    return {root->val, dist};
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(3);
    root->right = new TreeNode(3);

    std::map<int, int> data;
    auto it = traverse(root, data);

    int node = it.first;
    int dist = it.second;

    data[node] = std::max(data[node], dist);

    int max = 0;
    for (auto i : data)
        max = std::max(max, i.second);

    std::cout << max;
}