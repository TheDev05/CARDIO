#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int temp)
    {
        this->data = temp;
        this->left = this->right = NULL;
    }
};

void traverse(Node *root)
{
    if (root == NULL)
        return;

    std::stack<Node *> st;
    st.push(root);

    while (st.size())
    {
        Node *temp = st.top();
        st.pop();

        std::cout << temp->data << " ";

        if (temp->right)
            st.push(temp->right);
        if (temp->left)
            st.push(temp->left);
    }
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    traverse(root);
}