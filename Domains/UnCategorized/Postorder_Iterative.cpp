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

    std::vector<int> list;

    Node *prev = NULL;
    std::stack<Node *> st;

    while (st.size() || root)
    {
        if (root)
        {
            st.push(root);
            root = root->left;
        }
        else
        {
            if (st.top()->right == NULL || st.top()->right == prev)
            {
                prev = st.top();
                list.push_back(st.top()->data);
                st.pop();

                root = NULL;
            }
            else
                root = st.top()->right;
        }
    }

    for (auto i : list)
        std::cout << i << " ";
}