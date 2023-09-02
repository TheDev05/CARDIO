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

void traverse(TreeNode *root, std::stack<TreeNode *> &st)
{
    while (root)
    {
        st.push(root);
        root = root->right;
    }
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    std::stack<TreeNode *> st;
    traverse(root, st);

    int inox = 0;
    while (st.size())
    {
        TreeNode *local = st.top();
        st.pop();

        local->val += inox;
        inox = local->val;

        if (local->left)
            traverse(local->left, st);
    }

    std::cout << root->val;
}