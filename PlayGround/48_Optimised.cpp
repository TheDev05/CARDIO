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

int generate(std::vector<int> &preorder, int &index, long long left, long long right)
{

}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> preorder(n);
    for (auto &i : preorder)
        std::cin >> i;

    long long left = LONG_MIN, right = LONG_MAX;
    generate(preorder, 0, left, right);
}