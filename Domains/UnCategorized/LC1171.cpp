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

    std::map<int, ListNode *> data;
    ListNode *temp = head;

    int sum = 0;
    data[sum] = NULL;

    while (temp)
    {
        sum += temp->val;
        if (data.contains(sum))
        {
            if (data[sum] == NULL)
            {
                sum = 0;
                head = temp->next;
            }
            else
            {
                data[sum]->next = temp->next;
            }
        }

        data[sum] = temp;
        temp = temp->next;
    }

    while (head)
    {
        std::cout << head->val << " ";
        head = head->next;
    }
}