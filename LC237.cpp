#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int temp)
    {
        this->val = temp;
        this->next = NULL;
    }
};

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    Node *target = head->next;
    while (target->next)
    {
        target->val = target->next->val;
        target = target->next;
    }
}