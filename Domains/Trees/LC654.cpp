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

int getMax(std::vector<int> num)
{
    int max = 0, index = 0;
    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] > max)
        {
            max = num[i];
            index = i;
        }
    }

    return index;
}

Node *traverse(std::vector<int> &num)
{
    int maxIndex = getMax(num);

    Node *root = new Node(num[maxIndex]);

    std::vector<int> temp;
    for (int i = 0; i < maxIndex; i++)
        temp.push_back(num[i]);

    root->left = traverse(temp);

    temp.clear();
    for (int i = maxIndex + 1; i < num.size(); i++)
        temp.push_back(num[i]);

    root->right = traverse(temp);

    return root;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    traverse(num);
}