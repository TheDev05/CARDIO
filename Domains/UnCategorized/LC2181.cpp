#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int temp)
    {
        this->val = temp;
        this->next = NULL;
    }
};

int main()
{
    ListNode *head = new ListNode(0);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);

    int sum = 0;
    ListNode *temp = head->next;

    ListNode *newHead = NULL;
    ListNode *pointer = newHead;

    while (temp)
    {
        if (temp->val)
            sum += temp->val;
        else
        {
            if (newHead == NULL)
                newHead = new ListNode(sum);
            else
                pointer->next = new ListNode(sum),
                pointer = pointer->next;

            sum = 0;
        }

        temp = temp->next;
    }

    head = newHead;

    while (head)
    {
        std::cout << head->val << " ";
        head = head->next;
    }
}