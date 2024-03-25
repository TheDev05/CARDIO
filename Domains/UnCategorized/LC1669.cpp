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
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    ListNode *temp = new ListNode(5);
    temp->next = new ListNode(6);

    int left, right;
    std::cin >> left >> right;

    ListNode *start, *end;
    int index = 1;

    ListNode *res = head;
    while (head)
    {
        if (index == left)
        {
            start = head;
            break;
        }

        head = head->next;
        index++;
    }

    if (start)
        end = start->next;

    start->next = temp;
    while (temp->next)
    {
        temp = temp->next;
    }

    temp->next = end;

    while (res)
    {
        std::cout << res->val << " ";
        res = res->next;
    }
}