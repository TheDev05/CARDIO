#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next, *prev;

    Node(int temp)
    {
        this->val = temp;
        this->next = this->prev = nullptr;
    }
};

Node *traverse(std::vector<int> &num)
{
    Node *head = new Node(num[0]);
    Node *pointer = head;

    for (int i = 1; i < num.size(); i++)
    {
        Node *temp = new Node(num[i]);

        pointer->next = temp;
        temp->prev = pointer;

        pointer = temp;
    }

    return head;
}

Node *reverseNode(Node *temp)
{
    Node *prev = NULL;
    while (temp)
    {
        Node *next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }

    return prev;
}

int main()
{
    std::vector<int> num = {1};
    // std::iota(begin(num), end(num), 1);

    Node *head = traverse(num);

    Node *tortoise = head, *hare = head;
    Node *mid = NULL;

    while (1)
    {
        mid = hare;

        if (tortoise->next && tortoise->next->next)
            tortoise = tortoise->next->next,
            hare = hare->next;
        else
            break;
    }

    if (tortoise->next && tortoise->next->next == NULL)
        mid = mid->next;

    std::cout << mid->val;
}