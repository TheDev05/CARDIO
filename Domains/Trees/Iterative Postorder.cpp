#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left, *right;

    Node(int temp)
    {
        this->left = this->right = NULL;
        this->val = temp;
    }
};

void traverse(Node *root)
{
    if (root == NULL)
        return;

    std::stack<Node *> st;
    Node *curr = root;

    while (curr || st.size())
    {
        if (curr)
        {
            st.push(curr);
            curr = curr->left;
        }
        else
        {
            Node *temp = st.top()->right;

            if (temp == NULL)
            {
                temp = st.top();
                std::cout << temp->val << " ";

                st.pop();

                while (st.size() && st.top()->right == temp)
                {
                    temp = st.top();
                    st.pop();

                    std::cout << temp->val << " ";
                }
            }
            else
                curr = temp;
        }
    }
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    traverse(root);
}