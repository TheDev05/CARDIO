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

int getLength(ListNode *head)
{
    if (head == NULL)
        return 0;

    ListNode *fast = head, *slow = head;
    int count = 1;

    while (fast)
    {
        if (fast->next)
            fast = fast->next->next;
        else
            return count;

        slow = slow->next;

        count += 2;
    }

    return count - 1;
}

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);

    int k;
    std::cin >> k;

    int len = getLength(head);
    k = (len - k) + 1;

    ListNode *temp = head, *prev = NULL;
    while (temp)
    {
        if (k == 0)
            prev->next = temp->next;

        prev = temp;
        temp = temp->next;
    }

    
}