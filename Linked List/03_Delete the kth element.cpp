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
        this->next = this->prev = NULL;
    }
};

Node *traverse(std::vector<int> &num)
{
    Node *head = new Node(num[0]);
    Node *pointer = head;

    for (int i = 1; i < num.size(); i++)
    {
        Node *temp = new Node(num[i]);

        temp->prev = pointer;
        pointer->next = temp;

        pointer = temp;
    }

    return head;
}

Node *deleteNode(Node *head)
{
    Node *prev = head->prev;
    Node *next = head->next;
    Node *res = NULL;

    if (prev && next)
    {
        prev->next = next;
        next->prev = prev;
    }
    else if (prev)
        prev->next = NULL;
    else if (next)
        next->prev = NULL,
        res = next;

    delete head;
    return res;
}

int main()
{
    std::vector<int> num(5);
    std::iota(begin(num), end(num), 1);

    int index;
    std::cin >> index;

    Node *head = traverse(num);
    if (head == NULL || head->next == NULL)
        return NULL;

    Node *temp = head;
    int count = 0;

    while (temp)
    {
        if (count == index)
        {
            Node *newHead = deleteNode(temp);
            if (newHead)
                head = newHead;
        }

        count++;
        temp = temp->next;
    }
}