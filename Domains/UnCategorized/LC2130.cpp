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

ListNode *getMid(ListNode *head)
{
    ListNode *slow = head, *fast = head->next;
    while (fast)
    {
        if (fast->next == NULL)
            return slow;

        slow = slow->next;
        fast = fast->next->next;
    }

    return NULL;
}

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);

    ListNode *pointer = head;
    ListNode *prev = NULL;

    ListNode *newHead = NULL;
    ListNode *mid = getMid(head);

    bool ok = false;
    while (pointer)
    {
        if (ok)
        {
            ListNode *temp = pointer->next;
            pointer->next = prev;
            prev = pointer;
            pointer = temp;
        }
        else if (mid == pointer)
        {
            ListNode *temp = pointer->next;
            pointer->next = NULL;
            pointer = temp;
            ok = true;
        }
        else
            pointer = pointer->next;
    }

    newHead = prev;

    int max = 0;
    while (newHead && head)
    {
        max = std::max(max, head->val + newHead->val);

        head = head->next;
        newHead = newHead->next;
    }

    std::cout << max;
}