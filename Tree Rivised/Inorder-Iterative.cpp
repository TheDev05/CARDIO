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

void traverse(Node *root, std::vector<int> &num)
{
    if (root == NULL)
        return;

    std::stack<Node *> st;
    Node *inox = root;

    while (1)
    {
        if (inox == NULL)
        {
            if (st.empty())
                return;

            num.push_back(st.top()->data);
            inox = st.top()->right;

            st.pop();
        }
        else
        {
            st.push(inox);
            inox = inox->left;
        }
    }
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    std::vector<int> num;
    traverse(root, num);

    for (auto i : num)
        std::cout << i << " ";
}