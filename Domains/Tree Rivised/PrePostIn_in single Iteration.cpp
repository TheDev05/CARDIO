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

void traverse(Node *root, std::vector<int> &In, std::vector<int> &Pre, std::vector<int> &Post)
{
    if (root == NULL)
        return;

    std::stack<std::pair<Node *, int>> st;
    st.push({root, 1});

    while (st.size())
    {
        std::pair<Node *, int> temp = st.top();
        st.pop();

        if (temp.second == 1)
        {
            Pre.push_back(temp.first->val);
            st.push({temp.first, temp.second + 1});

            if (temp.first->left != NULL)
                st.push({temp.first->left, 1});
        }
        else if (temp.second == 2)
        {
            In.push_back(temp.first->val);
            st.push({temp.first, temp.second + 1});

            if (temp.first->right != NULL)
                st.push({temp.first->right, 1});
        }
        else
            Post.push_back(temp.first->val);
    }
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(5);

    root->left->left = new Node(3);
    root->left->right = new Node(4);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    std::vector<int> StoreIn, StorePre, StorePost;
    traverse(root, StoreIn, StorePre, StorePost);

    for (auto i : StoreIn)
        std::cout << i << " ";
    std::cout << '\n';

    for (auto i : StorePre)
        std::cout << i << " ";
    std::cout << '\n';

    for (auto i : StorePost)
        std::cout << i << " ";
}