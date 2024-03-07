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

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    std::stack<Node *> st;
    std::vector<int> list;

    Node *prev = NULL;
    while (st.size() || root)
    {
        if (root)
        {
            list.push_back(root->data);

            st.push(root);
            root = root->left;
        }
        else
        {
            if (st.top()->right == NULL || st.top()->right == prev)
            {
                root = NULL;
                prev = st.top();
            }
            else
                root = st.top()->right;

            st.pop();
        }
    }

    for (auto i : list)
        std::cout << i << " ";
}