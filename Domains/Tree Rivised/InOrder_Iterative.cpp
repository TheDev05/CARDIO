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
    Node *temp = root;

    while (1)
    {
        if (temp == NULL)
        {
            if (st.empty())
                break;

            store.push_back(st.top()->val);
            temp = st.top()->right;

            st.pop();
        }
        else
        {
            st.push(temp);
            temp = temp->left;
        }
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