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

void traverse(Node *root, std::vector<int> &store)
{
    if (root == NULL)
        return;

    std::stack<Node *> st;
    st.push(root);

    while (st.size())
    {
        Node *inox = st.top();
        st.pop();

        if (inox->right != NULL)
            st.push(inox->right);
        if (inox->left != NULL)
            st.push(inox->left);

        store.push_back(inox->val);
    }
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    std::vector<int> store;
    traverse(root, store);

    for (auto i : store)
        std::cout << i << " ";
}